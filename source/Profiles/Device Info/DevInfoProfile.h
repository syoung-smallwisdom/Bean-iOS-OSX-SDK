//
//  BLEDevice.h
//  BleArduino
//
//  Created by Raymond Kampmeier on 8/16/13.
//  Copyright (c) 2013 Punch Through Design. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
#import <CoreBluetooth/CoreBluetooth.h>
#else
#import <IOBluetooth/IOBluetooth.h>
#endif

#import "Profile_Protocol.h"

#define SERVICE_DEVICE_INFORMATION @"180A"
#define CHARACTERISTIC_HARDWARE_VERSION @"2A27"
#define CHARACTERISTIC_FIRMWARE_VERSION @"2A26"
#define CHARACTERISTIC_SOFTWARE_VERSION @"2A28"


@interface DevInfoProfile : NSObject <Profile_Protocol>

@property (nonatomic, assign) id<ProfileDelegate_Protocol> delegate;

-(id)initWithPeripheral:(CBPeripheral*)peripheral delegate:(id<ProfileDelegate_Protocol>)delegate;

@end
