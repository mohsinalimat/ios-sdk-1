// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
enum QKActionType : NSInteger;
@class QKActionResult;
@class UIViewController;
@protocol QKActionDelegate;

SWIFT_CLASS_NAMED("Action")
@interface QKAction : NSObject
@property (nonatomic, readonly) enum QKActionType type;
@property (nonatomic, weak) id <QKActionDelegate> _Nullable delegate;
/**
  A key value pair representation of the action’s properties/data.
  In a custom action this computed property MUST be overridden to store the action data on the backend.
*/
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable data;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithString:(NSString * _Nonnull)string;
/**
  Implementation of the action handling. Has to be overridden if subclassed.
  \param completion block must be invoked.

*/
- (void)performWithCompletion:(void (^ _Nonnull)(QKActionResult * _Nonnull))completion;
/**
  Presents a view controller on th1e app’s root view controller unless the action’s delegate blocks this.
  Use this method instead of manually presenting or query the delegate first.
  \param viewController view controller to be presented.


  returns:
  whether the view controller was presented
*/
- (BOOL)presentWithViewController:(UIViewController * _Nonnull)viewController;
/**
  Opens a URL unless the action’s delegate blocks this.
  Use this method instead of manually opening URLs or query the delegate first.
  \param url the URL to be opened.


  returns:
  whether the URL was opened.
*/
- (BOOL)openUrl:(NSURL * _Nonnull)url;
@end


SWIFT_PROTOCOL_NAMED("ActionDelegate")
@protocol QKActionDelegate
@optional
/**
  Whether the action should display the provided view controller (for instance, to display the action result data).
*/
- (BOOL)action:(QKAction * _Nonnull)action shouldPresentViewController:(UIViewController * _Nonnull)viewController;
/**
  Invoked when a default view controller to diplay the action result will be presented.
*/
- (void)action:(QKAction * _Nonnull)action willPresentActionResultViewController:(UIViewController * _Nonnull)viewController;
/**
  Invoked when a default view controller to diplay the action result was dismissed.
*/
- (void)action:(QKAction * _Nonnull)action didDismissActionResultViewController:(UIViewController * _Nonnull)viewController;
/**
  Whether the action should open the provided URL.
*/
- (BOOL)action:(QKAction * _Nonnull)action shouldOpenURL:(NSURL * _Nonnull)url;
@end

@class QKScannable;
@protocol QKActionProcessorDelegate;

/**
  ActionProcessor for handling Quikkly actions
*/
SWIFT_CLASS_NAMED("ActionProcessor")
@interface QKActionProcessor : NSObject <QKActionDelegate>
@property (nonatomic, readonly) BOOL isLocked;
@property (nonatomic, weak) id <QKActionProcessorDelegate> _Nullable delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Processing a Scannable object to perform its Action stored on the Quikkly back-end.
  \param scannable A scannable object


  returns:
  Whether processing was started. If false, the completion block will not be invoked.
*/
- (BOOL)processWithScannable:(QKScannable * _Nonnull)scannable;
/**
  Processing a barcode to perform its Action stored on the Quikkly back-end.
  \param barcode A String representation of a barcode


  returns:
  Whether processing was started. If false, the completion block will not be invoked.
*/
- (BOOL)processWithBarcode:(NSString * _Nonnull)barcode;
/**
  Retrieves the Action object linked to a Scannable on the Quikkly back-end.
  \param scannable The scannable object to find related Actions for.

  \param completion Returns a nullable action object.

*/
- (void)actionForScannable:(QKScannable * _Nonnull)scannable completion:(void (^ _Nonnull)(QKAction * _Nullable))completion;
/**
  Retrieves the Action object linked to a barcode on the Quikkly back-end.
  \param barcode The barcode to find related Actions for.

  \param completion Returns a nullable action object.

*/
- (void)actionForBarcode:(NSString * _Nonnull)barcode completion:(void (^ _Nonnull)(QKAction * _Nullable))completion;
- (BOOL)action:(QKAction * _Nonnull)action shouldPresentViewController:(UIViewController * _Nonnull)viewController;
- (void)action:(QKAction * _Nonnull)action willPresentActionResultViewController:(UIViewController * _Nonnull)viewController;
- (BOOL)action:(QKAction * _Nonnull)action shouldOpenURL:(NSURL * _Nonnull)url;
@end


SWIFT_PROTOCOL_NAMED("ActionProcessorDelegate")
@protocol QKActionProcessorDelegate
@optional
/**
  \code
  Processor will start processing

  \endcode*/
- (void)actionProcessorWillStartProcessing:(QKActionProcessor * _Nonnull)actionProcessor;
/**
  \code
  Processor has finished processing. The action and result are provided.

  \endcode*/
- (void)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor didProcessAction:(QKAction * _Nullable)action withResult:(QKActionResult * _Nonnull)result;
/**
  Whether the processor should display the default action result view controller. Override and return false to prevent this.

  returns:
  default is true
*/
- (BOOL)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor shouldPresentActionResultViewController:(UIViewController * _Nonnull)viewController forAction:(QKAction * _Nullable)action;
/**
  Invoked when a default view controller to diplay the action result will be presented.
*/
- (void)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor willPresentActionResultViewController:(UIViewController * _Nonnull)viewController;
/**
  Invoked when a default view controller to diplay the action result was dismissed.
*/
- (void)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor didDismissActionResultViewController:(UIViewController * _Nonnull)viewController;
/**
  Whether the processor should open the provided URL. Override and return false to prevent this.

  returns:
  default is true
*/
- (BOOL)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor shouldOpenActionResultURL:(NSURL * _Nonnull)url forAction:(QKAction * _Nonnull)action;
/**
  Allows using any custom subclass of Action handle actions of type .custom. Perform will be called by the ActionProcessor.

  returns:
  The Action object to handle the provided actionData
*/
- (QKAction * _Nonnull)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor customActionForData:(NSDictionary<NSString *, id> * _Nonnull)data;
@end

enum QKActionResultState : NSInteger;

SWIFT_CLASS_NAMED("ActionResult")
@interface QKActionResult : NSObject
@property (nonatomic) enum QKActionResultState state;
@property (nonatomic, strong) QKAction * _Nullable action;
- (nonnull instancetype)initWithState:(enum QKActionResultState)state action:(QKAction * _Nullable)action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, QKActionResultState, "State") {
  QKActionResultStateSuccess = 0,
  QKActionResultStateFailure = 1,
  QKActionResultStateCancelled = 2,
  QKActionResultStateUnavailable = 3,
};

/**
  An enum of available Quikkly actions.
  Note: “custom” is not implemented and needs to be provided by the app.
*/
typedef SWIFT_ENUM_NAMED(NSInteger, QKActionType, "ActionType") {
  QKActionTypeUnknown = -1,
  QKActionTypeLikeOnFacebook = 0,
  QKActionTypeFollowOnTwitter = 1,
  QKActionTypeFollowOnFacebook = 2,
  QKActionTypeFollowOnInstagram = 3,
  QKActionTypeFollowOnGooglePlus = 4,
  QKActionTypeFindOnMaps = 6,
  QKActionTypeWatchOnYoutube = 7,
  QKActionTypeListenOnSpotify = 8,
  QKActionTypeDownloadOnAppStore = 11,
  QKActionTypeDownloadOnGooglePlay = 12,
  QKActionTypeWebsite = 17,
  QKActionTypeBuyOnAmazon = 18,
  QKActionTypeListenOnSoundcloud = 24,
  QKActionTypeBuy = 30,
  QKActionTypeVideoThenWeb = 32,
  QKActionTypeListenOnAppleMusic = 33,
  QKActionTypeRateOnTripAdvisor = 34,
  QKActionTypeWatchOnTwitch = 35,
  QKActionTypeViewOnPinterest = 36,
  QKActionTypeViewOnEbay = 37,
  QKActionTypeWatchOnVimeo = 39,
  QKActionTypeMulti = 42,
  QKActionTypeViewOnLinkedIn = 46,
  QKActionTypeSearchOnTwitter = 51,
  QKActionTypeViewFacebookPage = 52,
  QKActionTypeWatchOnVine = 53,
  QKActionTypeTweetOnTwitter = 55,
  QKActionTypeLikeOnInstagram = 56,
  QKActionTypeMessageOnTwitter = 57,
  QKActionTypeCustom = 1000,
};


SWIFT_CLASS_NAMED("UrlAction")
@interface QKUrlAction : QKAction
@property (nonatomic, copy) NSURL * _Nullable url;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable data;
- (nonnull instancetype)initWithString:(NSString * _Nonnull)string SWIFT_UNAVAILABLE;
- (void)performWithCompletion:(void (^ _Nonnull)(QKActionResult * _Nonnull))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("AmazonBuyAction")
@interface QKAmazonBuyAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("AppStoreDownloadAction")
@interface QKAppStoreDownloadAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("AppleMusicListenAction")
@interface QKAppleMusicListenAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("BuyAction")
@interface QKBuyAction : QKUrlAction
@end


SWIFT_CLASS_NAMED("EbayViewAction")
@interface QKEbayViewAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("FacebookFollowAction")
@interface QKFacebookFollowAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull name;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("FacebookLikeAction")
@interface QKFacebookLikeAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull name;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("FacebookViewPageAction")
@interface QKFacebookViewPageAction : QKUrlAction
- (nonnull instancetype)initWithPageId:(uint64_t)pageId OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("GooglePlayDownloadAction")
@interface QKGooglePlayDownloadAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("InstagramFollowAction")
@interface QKInstagramFollowAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull name;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("LinkedInViewAction")
@interface QKLinkedInViewAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("MapsAction")
@interface QKMapsAction : QKUrlAction
@end

@class NSNumber;

SWIFT_CLASS_NAMED("MultiAction")
@interface QKMultiAction : QKAction
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable identifiers;
- (void)performWithCompletion:(void (^ _Nonnull)(QKActionResult * _Nonnull))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("PinterestViewAction")
@interface QKPinterestViewAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end

@class User;

SWIFT_CLASS("_TtC7Quikkly7Quikkly")
@interface Quikkly : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable apiKey;)
+ (NSString * _Nullable)apiKey;
+ (void)setApiKey:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) User * _Nullable user;)
+ (User * _Nullable)user;
+ (void)setUser:(User * _Nullable)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

SWIFT_CLASS_NAMED("ScanButton")
@interface QKScanButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol QKScanViewDelegate;

SWIFT_CLASS_NAMED("ScanView")
@interface QKScanView : UIView
@property (nonatomic, weak) id <QKScanViewDelegate> _Nullable delegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)start;
- (void)stop;
@end


SWIFT_PROTOCOL_NAMED("ScanViewDelegate")
@protocol QKScanViewDelegate
@optional
- (void)scanView:(QKScanView * _Nonnull)scanView didDetectScannables:(NSArray<QKScannable *> * _Nonnull)scannables;
- (void)scanView:(QKScanView * _Nonnull)scanView didDetectBarcode:(NSString * _Nonnull)barcode;
@end

@class NSBundle;

SWIFT_CLASS_NAMED("ScanViewController")
@interface QKScanViewController : UIViewController <QKScanViewDelegate, QKActionProcessorDelegate>
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)scanView:(QKScanView * _Nonnull)scanView didDetectScannables:(NSArray<QKScannable *> * _Nonnull)scannables;
- (void)actionProcessorWillStartProcessing:(QKActionProcessor * _Nonnull)actionProcessor;
- (void)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor didProcessAction:(QKAction * _Nullable)action withResult:(QKActionResult * _Nonnull)result;
- (void)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor willPresentActionResultViewController:(UIViewController * _Nonnull)viewController;
- (void)actionProcessor:(QKActionProcessor * _Nonnull)actionProcessor didDismissActionResultViewController:(UIViewController * _Nonnull)viewController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@class QKScannableSkin;

SWIFT_CLASS_NAMED("Scannable")
@interface QKScannable : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nonnull value;
@property (nonatomic, strong) QKScannableSkin * _Nonnull skin;
/**
  Asynchronous detection of scannables in an image.
  \param image The image to scan for scannables

  \param completion Block with an array of detected scannables; can be empty but not nil

*/
+ (void)detectInImage:(CGImageRef _Nonnull)image completion:(void (^ _Nonnull)(NSArray<QKScannable *> * _Nonnull))completion;
/**
  Asynchronous detection of scannables in an image
  \param image The image to scan for scannables


  returns:
  An array of detected Scannable objects; can be empty but not nil; Scannables will only be a raw representation (i.e. no skin object)
*/
+ (NSArray<QKScannable *> * _Nonnull)detectInImage:(CGImageRef _Nonnull)image;
/**
  Generates a scannable by using the actions on the Quikkly back-end.
  The Scannable object won’t be populated instantly and will asynchronously fetch data from the Quikkly back-end.
  \param completion this block will be invoked as soon as the scannable has been created


  returns:
  A new Scannable object
*/
- (nonnull instancetype)initWithAction:(QKAction * _Nonnull)action skin:(QKScannableSkin * _Nullable)skin completion:(void (^ _Nonnull)(BOOL, QKScannable * _Nonnull))completion;
/**
  Generates a scannable based on an identifier and a custom skin object
  \param value A numeric integer representation of the new Scannable object. The range of valid numbers is from 0 to 12 billion (12 * 10^9)

  \param skin The skin parameters applied to the new Scannable object


  returns:
  A new Scannable object
*/
- (nonnull instancetype)initWithValue:(NSNumber * _Nonnull)value skin:(QKScannableSkin * _Nonnull)skin;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

enum QKScannableSkinLayout : int32_t;

SWIFT_CLASS_NAMED("ScannableSkin")
@interface QKScannableSkin : NSObject
@property (nonatomic, copy) NSString * _Nullable backgroundColor;
@property (nonatomic, copy) NSString * _Nullable borderColor;
@property (nonatomic, copy) NSString * _Nullable codeColor;
@property (nonatomic, copy) NSString * _Nullable textColor;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, copy) NSString * _Nullable imageUri;
@property (nonatomic, strong) NSNumber * _Nullable imageWidth;
@property (nonatomic, strong) NSNumber * _Nullable imageHeight;
@property (nonatomic, strong) NSNumber * _Nullable imageScaleFactor;
@property (nonatomic) enum QKScannableSkinLayout layout;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)objcSetViewBoxWithX:(CGFloat)x y:(CGFloat)y width:(CGFloat)width height:(CGFloat)height;
- (void)objcSetShowTextWithShow:(BOOL)show;
@end

typedef SWIFT_ENUM_NAMED(int32_t, QKScannableSkinLayout, "Layout") {
  QKScannableSkinLayoutBorder = 3,
  QKScannableSkinLayoutHorizontal = 1,
  QKScannableSkinLayoutVertical = 2,
};


SWIFT_CLASS_NAMED("ScannableView")
@interface QKScannableView : UIView
@property (nonatomic, strong) QKScannable * _Nullable scannable;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithScannable:(QKScannable * _Nonnull)scannable;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)reload;
- (void)layoutSubviews;
@end


SWIFT_CLASS_NAMED("SoundCloudListenAction")
@interface QKSoundCloudListenAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("SpotifyListenAction")
@interface QKSpotifyListenAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull shareUri;
- (nonnull instancetype)initWithShareUri:(NSString * _Nonnull)shareUri OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("TripAdvisorRateAction")
@interface QKTripAdvisorAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("TwitchWatchAction")
@interface QKTwitchWatchAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("TwitterFollowAction")
@interface QKTwitterFollowAction : QKAction
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable data;
- (nullable instancetype)initWithString:(NSString * _Nonnull)string SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
- (void)performWithCompletion:(void (^ _Nonnull)(QKActionResult * _Nonnull))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("TwitterMessageAction")
@interface QKTwitterMessageAction : QKAction
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable data;
- (nullable instancetype)initWithString:(NSString * _Nonnull)string SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name message:(NSString * _Nonnull)message OBJC_DESIGNATED_INITIALIZER;
- (void)performWithCompletion:(void (^ _Nonnull)(QKActionResult * _Nonnull))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("TwitterSearchAction")
@interface QKTwitterSearchAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull query;
- (nonnull instancetype)initWithQuery:(NSString * _Nonnull)query OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("TwitterTweetAction")
@interface QKTwitterTweetAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull text;
- (nonnull instancetype)initWithText:(NSString * _Nonnull)text OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(Quikkly))
@end


@interface UIColor (SWIFT_EXTENSION(Quikkly))
@end


@interface UIImage (SWIFT_EXTENSION(Quikkly))
@end


@interface UIImage (SWIFT_EXTENSION(Quikkly))
@end


@interface UIImageView (SWIFT_EXTENSION(Quikkly))
@end



SWIFT_CLASS_NAMED("VimeoWatchAction")
@interface QKVimeoWatchAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("VineWatchAction")
@interface QKVineWatchAction : QKUrlAction
@property (nonatomic, copy) NSString * _Nonnull identifier;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("WebsiteAction")
@interface QKWebsiteAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("YoutubeWatchAction")
@interface QKYoutubeWatchAction : QKUrlAction
- (nonnull instancetype)initWithUrl:(NSURL * _Nullable)url OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
