// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
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
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class CustomParams;
@protocol ComposerDelegate;

SWIFT_CLASS("_TtC8Composer8Composer")
@interface Composer : NSObject
+ (NSString * _Nonnull)tinyPassEndpoint;
+ (NSString * _Nonnull)sandboxEndpoint;
@property (nonatomic, weak) id <ComposerDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nonnull endpoint;
@property (nonatomic, readonly, copy) NSString * _Nonnull aid;
@property (nonatomic, readonly) NSInteger protocolVersion;
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull tags;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull customVariables;
@property (nonatomic, strong) CustomParams * _Nullable customParams;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSString * _Nonnull referrer;
@property (nonatomic, copy) NSString * _Nonnull zoneId;
@property (nonatomic) BOOL trackPages;
@property (nonatomic) BOOL debug;
@property (nonatomic, copy) NSString * _Nonnull userToken;
@property (nonatomic, copy) NSString * _Nonnull userProvider;
- (nonnull instancetype)initWithAid:(NSString * _Nonnull)aid OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAid:(NSString * _Nonnull)aid sandbox:(BOOL)sandbox OBJC_DESIGNATED_INITIALIZER;
- (Composer * _Nonnull)endpoint:(NSString * _Nonnull)endpoint;
- (Composer * _Nonnull)tag:(NSString * _Nonnull)tag;
- (Composer * _Nonnull)tags:(NSArray<NSString *> * _Nonnull)tagCollection;
- (Composer * _Nonnull)customVariable:(NSString * _Nonnull)name value:(id _Nonnull)value;
- (Composer * _Nonnull)customVariables:(NSDictionary<NSString *, id> * _Nonnull)customVariableCollection;
- (Composer * _Nonnull)customParams:(CustomParams * _Nonnull)customParams;
- (Composer * _Nonnull)url:(NSString * _Nonnull)url;
- (Composer * _Nonnull)userToken:(NSString * _Nonnull)userToken;
- (Composer * _Nonnull)userProvider:(NSString * _Nonnull)userProvider;
- (Composer * _Nonnull)referrer:(NSString * _Nonnull)referrer;
- (Composer * _Nonnull)zoneId:(NSString * _Nonnull)zoneId;
- (Composer * _Nonnull)trackPages:(BOOL)trackPages;
- (Composer * _Nonnull)debug:(BOOL)debug;
- (Composer * _Nonnull)delegate:(id <ComposerDelegate> _Nullable)delegate;

/// Start experiences executing
- (Composer * _Nonnull)execute;
@end

@class XpEvent;
@class ShowLoginEventParams;
@class PageViewMeterEventParams;
@class ExperienceExecuteEventParams;

SWIFT_PROTOCOL("_TtP8Composer16ComposerDelegate_")
@protocol ComposerDelegate
@optional

/// <code>   Show login event
/// 
/// </code>
- (void)showLogin:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(ShowLoginEventParams * _Nullable)params;

/// Non site action event
- (void)nonSite:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event;

/// User segment true event
- (void)userSegmentTrue:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event;

/// User segment false event
- (void)userSegmentFalse:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event;

/// Meter active event
- (void)meterActive:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(PageViewMeterEventParams * _Nullable)params;

/// Meter expired event
- (void)meterExpired:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(PageViewMeterEventParams * _Nullable)params;

/// Exeperience execute event
- (void)experienceExecute:(Composer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(ExperienceExecuteEventParams * _Nullable)params;
@required

- (void)executionCompleted:(Composer * _Nonnull)composer;
@end


SWIFT_CLASS("_TtC8Composer12CustomParams")
@interface CustomParams : NSObject
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull content;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull user;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull request;
- (NSDictionary<NSString *, id> * _Nonnull)toDictionary;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class XpAccessItem;
@class User;

SWIFT_CLASS("_TtC8Composer28ExperienceExecuteEventParams")
@interface ExperienceExecuteEventParams : NSObject
@property (nonatomic, readonly, copy) NSArray<XpAccessItem *> * _Nonnull accessList;
@property (nonatomic, readonly, strong) User * _Nullable user;
@end


SWIFT_CLASS("_TtC8Composer24PageViewMeterEventParams")
@interface PageViewMeterEventParams : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull meterName;
@property (nonatomic, readonly) NSInteger currentViews;
@property (nonatomic, readonly) NSInteger viewsLeft;
@property (nonatomic, readonly) NSInteger maxViews;
@end


SWIFT_CLASS("_TtC8Composer20ShowLoginEventParams")
@interface ShowLoginEventParams : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userProvider;
@end

@class NSDictionary;

SWIFT_CLASS("_TtC8Composer14SplitTestEntry")
@interface SplitTestEntry : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull splitTestVariantId;
@property (nonatomic, readonly, copy) NSString * _Nonnull splitTestVariantName;
- (nonnull instancetype)initWithDict:(NSDictionary * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8Composer4User")
@interface User : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull uid;
@property (nonatomic, readonly, copy) NSString * _Nonnull firstName;
@property (nonatomic, readonly, copy) NSString * _Nonnull lastName;
@property (nonatomic, readonly, copy) NSString * _Nonnull email;
@end


SWIFT_CLASS("_TtC8Composer12XpAccessItem")
@interface XpAccessItem : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull rid;
@property (nonatomic, readonly, copy) NSString * _Nonnull resourceName;
@property (nonatomic, readonly) int64_t expireDate;
@property (nonatomic, readonly) int64_t daysUntilExpiration;
- (nonnull instancetype)initWithDict:(NSDictionary * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end

@class XpEventModuleParams;
@class XpEventExecutionContext;

SWIFT_CLASS("_TtC8Composer7XpEvent")
@interface XpEvent : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull eventType;
@property (nonatomic, readonly, strong) XpEventModuleParams * _Nullable eventModuleParams;
@property (nonatomic, readonly, strong) XpEventExecutionContext * _Nullable eventExecutionContext;
- (nonnull instancetype)initWithDict:(NSDictionary * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8Composer23XpEventExecutionContext")
@interface XpEventExecutionContext : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull experienceId;
@property (nonatomic, readonly, copy) NSString * _Nonnull executionId;
@property (nonatomic, readonly, copy) NSString * _Nonnull trackingId;
@property (nonatomic, readonly, copy) NSArray<SplitTestEntry *> * _Nonnull splitTestEntries;
@property (nonatomic, readonly, copy) NSString * _Nonnull currentMeterName;
@property (nonatomic, readonly, strong) User * _Nullable user;
@property (nonatomic, readonly, copy) NSString * _Nonnull region;
@property (nonatomic, readonly, copy) NSString * _Nonnull countryCode;
@property (nonatomic, readonly, copy) NSArray<XpAccessItem *> * _Nonnull accessList;
- (nonnull instancetype)initWithDict:(NSDictionary * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8Composer19XpEventModuleParams")
@interface XpEventModuleParams : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull moduleId;
@property (nonatomic, readonly, copy) NSString * _Nonnull moduleName;
- (nonnull instancetype)initWithDict:(NSDictionary * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop