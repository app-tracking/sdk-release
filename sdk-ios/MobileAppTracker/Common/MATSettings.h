//
//  MATSettings.h
//  MobileAppTracker
//
//  Created by John Bender on 1/10/14.
//  Copyright (c) 2014 HasOffers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MATEvent_internal.h"
#import "MATKeyStrings.h"
#import "MATPreloadData.h"

@protocol MATSettingsDelegate;

@interface MATSettings : NSObject

@property (nonatomic, assign) BOOL staging;                         // KEY_STAGING
@property (nonatomic, copy) NSNumber *debugMode;                    // KEY_DEBUG
@property (nonatomic, copy) NSNumber *allowDuplicates;              // KEY_SKIP_DUP

@property (nonatomic, copy) NSString *installReceipt;

@property (nonatomic, copy) NSDate *installDate;                    // KEY_INSDATE
@property (nonatomic, copy) NSString *sessionDate;                  // KEY_SESSION_DATETIME
@property (nonatomic, copy) NSDate *systemDate;                     // KEY_SYSTEM_DATE

@property (nonatomic, copy) NSString *referralUrl;                  // KEY_REFERRAL_URL
@property (nonatomic, copy) NSString *referralSource;               // KEY_REFERRAL_SOURCE
@property (nonatomic, copy) NSString *redirectUrl;                  // KEY_REDIRECT_URL

@property (nonatomic, copy) NSString *installLogId;                 // KEY_INSTALL_LOG_ID
@property (nonatomic, copy) NSString *updateLogId;                  // KEY_UPDATE_LOG_ID
@property (nonatomic, copy) NSString *openLogId;                    // KEY_OPEN_LOG_ID
@property (nonatomic, copy) NSString *lastOpenLogId;                // KEY_LAST_OPEN_LOG_ID

@property (nonatomic, copy) NSString *currencyCode;                 // KEY_CURRENCY_CODE

@property (nonatomic, copy) NSNumber *jailbroken;                   // KEY_OS_JAILBROKE

@property (nonatomic, copy) NSString *siteId;                       // KEY_SITE_ID
@property (nonatomic, copy) NSString *packageName;                  // KEY_PACKAGE_NAME
@property (nonatomic, copy) NSString *appName;                      // KEY_APP_NAME
@property (nonatomic, copy) NSString *appVersion;                   // KEY_APP_VERSION
@property (nonatomic, copy) NSString *advertiserId;                 // KEY_ADVERTISER_ID
@property (nonatomic, copy) NSString *conversionKey;                // KEY_KEY
@property (nonatomic, copy) NSString *trackingId;                   // KEY_TRACKING_ID
@property (nonatomic, copy) NSString *matId;                        // KEY_MAT_ID
@property (nonatomic, copy) NSString *facebookCookieId;             // KEY_FB_COOKIE_ID

@property (nonatomic, copy) NSString *ifv;                          // KEY_IOS_IFV
@property (nonatomic, copy) NSString *ifa;                          // KEY_IOS_IFA
@property (nonatomic, copy) NSNumber *ifaTracking;                  // KEY_IOS_AD_TRACKING

@property (nonatomic, copy) NSNumber *iadAttribution;               // KEY_IAD_ATTRIBUTION
@property (nonatomic, copy) NSDate *iadImpressionDate;              // KEY_IAD_IMPRESSION_DATE

@property (nonatomic, copy) NSNumber *appAdTracking;                // KEY_APP_AD_TRACKING

@property (nonatomic, copy) NSNumber *payingUser;                   // KEY_IS_PAYING_USER

@property (nonatomic, strong) MATPreloadData *preloadData;          // KEY_PRELOAD_DATA

@property (nonatomic, copy) NSNumber *existingUser;                 // KEY_EXISTING_USER
@property (nonatomic, copy) NSString *userEmail;                    // KEY_USER_EMAIL
@property (nonatomic, copy) NSString *userEmailMd5;                 // KEY_USER_EMAIL_MD5
@property (nonatomic, copy) NSString *userEmailSha1;                // KEY_USER_EMAIL_SHA1
@property (nonatomic, copy) NSString *userEmailSha256;              // KEY_USER_EMAIL_SHA256
@property (nonatomic, copy) NSString *userId;                       // KEY_USER_ID
@property (nonatomic, copy) NSString *userName;                     // KEY_USER_NAME
@property (nonatomic, copy) NSString *userNameMd5;                  // KEY_USER_NAME_MD5
@property (nonatomic, copy) NSString *userNameSha1;                 // KEY_USER_NAME_SHA1
@property (nonatomic, copy) NSString *userNameSha256;               // KEY_USER_NAME_SHA256
@property (nonatomic, copy) NSString *phoneNumber;                  // KEY_USER_PHONE
@property (nonatomic, copy) NSString *phoneNumberMd5;               // KEY_USER_PHONE_MD5
@property (nonatomic, copy) NSString *phoneNumberSha1;              // KEY_USER_PHONE_SHA1
@property (nonatomic, copy) NSString *phoneNumberSha256;            // KEY_USER_PHONE_SHA256
@property (nonatomic, copy) NSString *facebookUserId;               // KEY_FACEBOOK_USER_ID
@property (nonatomic, copy) NSString *twitterUserId;                // KEY_TWITTER_USER_ID
@property (nonatomic, copy) NSString *googleUserId;                 // KEY_GOOGLE_USER_ID

@property (nonatomic, copy) NSNumber *age;                          // KEY_AGE
@property (nonatomic, copy) NSNumber *gender;                       // KEY_GENDER
@property (nonatomic, copy) NSNumber *latitude;                     // KEY_LATITUDE
@property (nonatomic, copy) NSNumber *longitude;                    // KEY_LONGITUDE
@property (nonatomic, copy) NSNumber *altitude;                     // KEY_ALTITUDE

@property (nonatomic, copy) NSString *trusteTPID;                   // KEY_TRUSTE_TPID

@property (nonatomic, copy) NSString *deviceModel;                  // KEY_DEVICE_MODEL
@property (nonatomic, copy) NSNumber *deviceCpuType;                // KEY_DEVICE_CPUTYPE
@property (nonatomic, copy) NSNumber *deviceCpuSubtype;             // KEY_DEVICE_CPUSUBTYPE
@property (nonatomic, copy) NSString *deviceCarrier;                // KEY_DEVICE_CARRIER
@property (nonatomic, copy) NSString *deviceBrand;                  // KEY_DEVICE_BRAND
@property (nonatomic, copy) NSString *screenSize;                   // KEY_SCREEN_SIZE
@property (nonatomic, copy) NSNumber *screenDensity;                // KEY_SCREEN_DENSITY
@property (nonatomic, copy) NSString *mobileCountryCode;            // KEY_CARRIER_COUNTRY_CODE
@property (nonatomic, copy) NSString *mobileCountryCodeISO;         // KEY_CARRIER_COUNTRY_CODE_ISO
@property (nonatomic, copy) NSString *mobileNetworkCode;            // KEY_CARRIER_NETWORK_CODE
@property (nonatomic, copy) NSString *countryCode;                  // KEY_COUNTRY_CODE
@property (nonatomic, copy) NSString *osVersion;                    // KEY_OS_VERSION
@property (nonatomic, copy) NSString *language;                     // KEY_LANGUAGE

@property (nonatomic, copy) NSString *pluginName;                   // KEY_SDK_PLUGIN

@property (nonatomic, copy) NSNumber *locationAuthorizationStatus;  // KEY_LOCATION_AUTH_STATUS
@property (nonatomic, copy) NSNumber *bluetoothState;               // KEY_BLUETOOTH_STATE

@property (nonatomic, assign) id <MATSettingsDelegate> delegate;

- (void)loadFacebookCookieId;

- (NSString*)domainName;

- (void)urlStringForEvent:(MATEvent *)event
             trackingLink:(NSString**)trackingLink
            encryptParams:(NSString**)encryptParams;

@end


@protocol MATSettingsDelegate <NSObject>
@optional
- (void)_matURLTestingCallbackWithParamsToBeEncrypted:(NSString*)paramsToBeEncrypted withPlaintextParams:(NSString*)plaintextParams;
@end
