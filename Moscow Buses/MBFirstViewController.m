//
//  MBFirstViewController.m
//  Moscow Buses
//
//  Created by Yuri Karabatov on 24.11.13.
//  Copyright (c) 2013 Yuri Karabatov. All rights reserved.
//

#import "MBFirstViewController.h"
#import <GoogleMaps/GoogleMaps.h>

@interface MBFirstViewController ()

@end

@implementation MBFirstViewController {
    GMSMapView *mapView_;
    __weak IBOutlet UIButton *myLocationButton;
    __weak IBOutlet UIButton *plusButton;
    __weak IBOutlet UIButton *minusButton;
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    // Create a GMSCameraPosition that tells the map to display the
    // coordinate 55.755713,37.617188 at zoom level 9.
    GMSCameraPosition *camera = [GMSCameraPosition cameraWithLatitude:55.755713
                                                            longitude:37.617188
                                                                 zoom:9];
    mapView_ = [GMSMapView mapWithFrame:self.view.bounds camera:camera];
    mapView_.myLocationEnabled = YES;
    mapView_.mapType = kGMSTypeNormal;
    mapView_.settings.myLocationButton = NO;
    mapView_.settings.compassButton = YES;
    mapView_.settings.indoorPicker = NO;
    
    [self.view insertSubview:mapView_ atIndex:0];
    
    // Creates a marker in the center of the map.
    GMSMarker *marker = [[GMSMarker alloc] init];
    marker.position = CLLocationCoordinate2DMake(55.755713, 37.617188);
    marker.title = @"Moscow";
    marker.snippet = @"Russia";
    marker.map = mapView_;
}

- (IBAction)myLocationButtonClicked:(UIButton *)sender {
    CLLocation *location = mapView_.myLocation;
    if (location) {
        [mapView_ animateToCameraPosition:[GMSCameraPosition cameraWithTarget:location.coordinate zoom:12]];
    }
}
- (IBAction)plusButtonClicked:(UIButton *)sender {
    [mapView_ animateWithCameraUpdate:[GMSCameraUpdate zoomIn]];
}
- (IBAction)minusButtonClicked:(id)sender {
    [mapView_ animateWithCameraUpdate:[GMSCameraUpdate zoomOut]];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
