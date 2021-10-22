#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AnymoCoreAnymoSdk, AnymoCoreAnymoSdkConfig, AnymoCoreDatabaseDriverFactory, AnymoCoreAnymoComponent, AnymoCoreContentModule, AnymoCoreAppStyle, AnymoCoreKotlinUnit, AnymoCoreScreen, AnymoCoreCommonFlow<T>, AnymoCoreOpener, AnymoCoreBlock, AnymoCoreLink, AnymoCoreBlockButtonStyle, AnymoCoreBlockButton, AnymoCoreKotlinEnumCompanion, AnymoCoreKotlinEnum<E>, AnymoCoreBlockButtonStyleCompanion, AnymoCoreKotlinArray<T>, AnymoCoreBlockImage, AnymoCoreBlockSpacer, AnymoCoreBlockTextStyle, AnymoCoreBlockText, AnymoCoreBlockTextStyleCompanion, AnymoCoreBlockTypeCompanion, AnymoCoreBlockType, AnymoCoreHorizontalAlignmentCompanion, AnymoCoreHorizontalAlignment, AnymoCoreSlot, AnymoCoreVerticalAlignment, AnymoCorePage, AnymoCoreScreenContentType, AnymoCoreScreenContentTypeCompanion, AnymoCoreVerticalAlignmentCompanion, AnymoCoreLinksModule, AnymoCoreLinkAction, AnymoCoreLinkActionClose, AnymoCoreLinkActionNext, AnymoCoreLinkNavigable, AnymoCoreLinkNavigableHttp, AnymoCoreAnymoDatabaseCompanion, AnymoCoreAppStyle_, AnymoCoreRuntimeQuery<__covariant RowType>, AnymoCoreBlock_, AnymoCoreDbModule, AnymoCoreOpener_, AnymoCorePage_, AnymoCoreScreen_, AnymoCoreSlot_, AnymoCoreApiModule, AnymoCoreKtor_client_coreHttpClient, AnymoCoreKotlinx_serialization_jsonJson, AnymoCoreKtor_client_coreHttpRequestBuilder, AnymoCoreKotlinThrowable, AnymoCoreKotlinException, AnymoCoreKotlinRuntimeException, AnymoCoreKotlinIllegalStateException, AnymoCoreRuntimeTransacterTransaction, AnymoCoreKtor_client_coreHttpClientEngineConfig, AnymoCoreKtor_client_coreHttpClientConfig<T>, AnymoCoreKtor_client_coreHttpClientCall, AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher, AnymoCoreKtor_client_coreHttpReceivePipeline, AnymoCoreKtor_client_coreHttpRequestPipeline, AnymoCoreKtor_client_coreHttpResponsePipeline, AnymoCoreKtor_client_coreHttpSendPipeline, AnymoCoreKotlinx_serialization_coreSerializersModule, AnymoCoreKotlinx_serialization_jsonJsonConfiguration, AnymoCoreKotlinx_serialization_jsonJsonDefault, AnymoCoreKotlinx_serialization_jsonJsonElement, AnymoCoreKtor_httpHeadersBuilder, AnymoCoreKtor_client_coreHttpRequestBuilderCompanion, AnymoCoreKtor_client_coreHttpRequestData, AnymoCoreKtor_httpURLBuilder, AnymoCoreKtor_httpHttpMethod, AnymoCoreKotlinByteArray, AnymoCoreKtor_client_coreHttpResponseData, AnymoCoreKtor_client_coreProxyConfig, AnymoCoreKotlinNothing, AnymoCoreKtor_client_coreHttpClientCallCompanion, AnymoCoreKtor_client_coreTypeInfo, AnymoCoreKtor_client_coreHttpResponse, AnymoCoreKtor_utilsAttributeKey<T>, AnymoCoreKotlinAbstractCoroutineContextElement, AnymoCoreKotlinx_coroutines_coreCoroutineDispatcherKey, AnymoCoreKtor_utilsPipelinePhase, AnymoCoreKtor_utilsPipeline<TSubject, TContext>, AnymoCoreKtor_client_coreHttpReceivePipelinePhases, AnymoCoreKtor_client_coreHttpRequestPipelinePhases, AnymoCoreKtor_client_coreHttpResponsePipelinePhases, AnymoCoreKtor_client_coreHttpResponseContainer, AnymoCoreKtor_client_coreHttpSendPipelinePhases, AnymoCoreKotlinx_serialization_jsonJsonElementCompanion, AnymoCoreKtor_utilsStringValuesBuilder, AnymoCoreKtor_httpUrl, AnymoCoreKtor_httpOutgoingContent, AnymoCoreKtor_httpURLProtocol, AnymoCoreKtor_httpParametersBuilder, AnymoCoreKtor_httpURLBuilderCompanion, AnymoCoreKotlinCancellationException, AnymoCoreKtor_httpHttpMethodCompanion, AnymoCoreKotlinByteIterator, AnymoCoreKtor_httpHttpStatusCode, AnymoCoreKtor_utilsGMTDate, AnymoCoreKtor_httpHttpProtocolVersion, AnymoCoreKtor_ioMemory, AnymoCoreKtor_ioIoBuffer, AnymoCoreKtor_ioByteReadPacket, AnymoCoreKtor_ioByteOrder, AnymoCoreKotlinAbstractCoroutineContextKey<B, E>, AnymoCoreKotlinx_serialization_coreSerialKind, AnymoCoreKtor_httpUrlCompanion, AnymoCoreKtor_httpContentType, AnymoCoreKtor_httpURLProtocolCompanion, AnymoCoreKtor_httpUrlEncodingOption, AnymoCoreKtor_httpHttpStatusCodeCompanion, AnymoCoreKtor_utilsGMTDateCompanion, AnymoCoreKtor_utilsWeekDay, AnymoCoreKtor_utilsMonth, AnymoCoreKtor_httpHttpProtocolVersionCompanion, AnymoCoreKtor_ioMemoryCompanion, AnymoCoreKtor_ioBufferCompanion, AnymoCoreKtor_ioBuffer, AnymoCoreKtor_ioChunkBuffer, AnymoCoreKtor_ioChunkBufferCompanion, AnymoCoreKotlinCharArray, AnymoCoreKtor_ioIoBufferCompanion, AnymoCoreKtor_ioAbstractInputCompanion, AnymoCoreKtor_ioAbstractInput, AnymoCoreKtor_ioByteReadPacketBaseCompanion, AnymoCoreKtor_ioByteReadPacketBase, AnymoCoreKtor_ioByteReadPacketPlatformBase, AnymoCoreKtor_ioByteReadPacketCompanion, AnymoCoreKtor_ioByteOrderCompanion, AnymoCoreKotlinKTypeProjection, AnymoCoreKtor_httpHeaderValueParam, AnymoCoreKtor_httpHeaderValueWithParametersCompanion, AnymoCoreKtor_httpHeaderValueWithParameters, AnymoCoreKtor_httpContentTypeCompanion, AnymoCoreKotlinx_coroutines_coreAtomicDesc, AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, AnymoCoreKtor_utilsWeekDayCompanion, AnymoCoreKtor_utilsMonthCompanion, AnymoCoreKotlinCharIterator, AnymoCoreKotlinKVariance, AnymoCoreKotlinKTypeProjectionCompanion, AnymoCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, AnymoCoreKotlinx_coroutines_coreOpDescriptor, AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode, AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol AnymoCoreAnymoRepository, AnymoCoreKotlinx_coroutines_coreFlow, AnymoCoreKotlinComparable, AnymoCoreAlignment, AnymoCoreKotlinx_coroutines_coreFlowCollector, AnymoCoreKtor_ioCloseable, AnymoCoreAppStyleQueries, AnymoCoreScreenQueries, AnymoCoreRuntimeTransactionWithoutReturn, AnymoCoreRuntimeTransactionWithReturn, AnymoCoreRuntimeTransacter, AnymoCoreAnymoDatabase, AnymoCoreRuntimeSqlDriver, AnymoCoreRuntimeSqlDriverSchema, AnymoCoreKotlinIterator, AnymoCoreRuntimeTransactionCallbacks, AnymoCoreRuntimeSqlPreparedStatement, AnymoCoreRuntimeSqlCursor, AnymoCoreRuntimeCloseable, AnymoCoreRuntimeQueryListener, AnymoCoreKotlinCoroutineContext, AnymoCoreKotlinx_coroutines_coreCoroutineScope, AnymoCoreKtor_client_coreHttpClientEngine, AnymoCoreKtor_client_coreHttpClientEngineCapability, AnymoCoreKtor_utilsAttributes, AnymoCoreKotlinx_serialization_coreDeserializationStrategy, AnymoCoreKotlinx_serialization_coreSerializationStrategy, AnymoCoreKotlinx_serialization_coreSerialFormat, AnymoCoreKotlinx_serialization_coreStringFormat, AnymoCoreKtor_httpHttpMessageBuilder, AnymoCoreKotlinx_coroutines_coreJob, AnymoCoreKotlinCoroutineContextElement, AnymoCoreKotlinCoroutineContextKey, AnymoCoreKtor_client_coreHttpClientFeature, AnymoCoreKtor_ioByteReadChannel, AnymoCoreKtor_utilsTypeInfo, AnymoCoreKtor_client_coreHttpRequest, AnymoCoreKotlinContinuation, AnymoCoreKotlinContinuationInterceptor, AnymoCoreKotlinx_coroutines_coreRunnable, AnymoCoreKotlinSuspendFunction2, AnymoCoreKotlinx_serialization_coreDecoder, AnymoCoreKotlinx_serialization_coreSerialDescriptor, AnymoCoreKotlinx_serialization_coreEncoder, AnymoCoreKotlinx_serialization_coreSerializersModuleCollector, AnymoCoreKotlinx_serialization_coreKSerializer, AnymoCoreKotlinKClass, AnymoCoreKtor_utilsStringValues, AnymoCoreKotlinMapEntry, AnymoCoreKtor_httpHeaders, AnymoCoreKotlinx_coroutines_coreChildHandle, AnymoCoreKotlinx_coroutines_coreChildJob, AnymoCoreKotlinx_coroutines_coreDisposableHandle, AnymoCoreKotlinSequence, AnymoCoreKotlinx_coroutines_coreSelectClause0, AnymoCoreKtor_ioReadSession, AnymoCoreKotlinSuspendFunction1, AnymoCoreKotlinAppendable, AnymoCoreKotlinKType, AnymoCoreKtor_httpHttpMessage, AnymoCoreKotlinFunction, AnymoCoreKotlinx_serialization_coreCompositeDecoder, AnymoCoreKotlinAnnotation, AnymoCoreKotlinx_serialization_coreCompositeEncoder, AnymoCoreKotlinKDeclarationContainer, AnymoCoreKotlinKAnnotatedElement, AnymoCoreKotlinKClassifier, AnymoCoreKtor_httpParameters, AnymoCoreKotlinx_coroutines_coreParentJob, AnymoCoreKotlinx_coroutines_coreSelectInstance, AnymoCoreKotlinSuspendFunction0, AnymoCoreKtor_ioObjectPool, AnymoCoreKtor_ioInput, AnymoCoreKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AnymoCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AnymoCoreBase (AnymoCoreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AnymoCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AnymoCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAnymoCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AnymoCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface AnymoCoreByte : AnymoCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AnymoCoreUByte : AnymoCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AnymoCoreShort : AnymoCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AnymoCoreUShort : AnymoCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AnymoCoreInt : AnymoCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AnymoCoreUInt : AnymoCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AnymoCoreLong : AnymoCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AnymoCoreULong : AnymoCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AnymoCoreFloat : AnymoCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AnymoCoreDouble : AnymoCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AnymoCoreBoolean : AnymoCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoSdk")))
@interface AnymoCoreAnymoSdk : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)anymoSdk __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreAnymoSdk *shared __attribute__((swift_name("shared")));
- (void)setupConfig:(AnymoCoreAnymoSdkConfig *)config databaseDriverFactory:(AnymoCoreDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("setup(config:databaseDriverFactory:)")));
@property (readonly) NSString *SUBSCRIPTION_ID_DEFAULT __attribute__((swift_name("SUBSCRIPTION_ID_DEFAULT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoSdk.Config")))
@interface AnymoCoreAnymoSdkConfig : AnymoCoreBase
- (instancetype)initWithApiKey:(NSString *)apiKey enableLogging:(BOOL)enableLogging __attribute__((swift_name("init(apiKey:enableLogging:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreAnymoSdkConfig *)doCopyApiKey:(NSString *)apiKey enableLogging:(BOOL)enableLogging __attribute__((swift_name("doCopy(apiKey:enableLogging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) BOOL enableLogging __attribute__((swift_name("enableLogging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoComponent")))
@interface AnymoCoreAnymoComponent : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)anymoComponent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreAnymoComponent *shared __attribute__((swift_name("shared")));
@property (readonly) id<AnymoCoreAnymoRepository> anymoRepository __attribute__((swift_name("anymoRepository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentModule")))
@interface AnymoCoreContentModule : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contentModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreContentModule *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("AnymoLocalDataSource")))
@protocol AnymoCoreAnymoLocalDataSource
@required
- (id<AnymoCoreKotlinx_coroutines_coreFlow>)allOpenersSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("allOpeners(subscriptionId:)")));
- (id<AnymoCoreKotlinx_coroutines_coreFlow>)getAppStyle __attribute__((swift_name("getAppStyle()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceAppStyleAppStyle:(AnymoCoreAppStyle *)appStyle completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceAppStyle(appStyle:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceScreensScreens:(NSArray<AnymoCoreScreen *> *)screens completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceScreens(screens:completionHandler:)")));
- (id<AnymoCoreKotlinx_coroutines_coreFlow>)screenId:(int64_t)id __attribute__((swift_name("screen(id:)")));
@end;

__attribute__((swift_name("AnymoRepository")))
@protocol AnymoCoreAnymoRepository
@required
- (AnymoCoreCommonFlow<AnymoCoreAppStyle *> *)appStyle __attribute__((swift_name("appStyle()")));
- (AnymoCoreCommonFlow<NSArray<AnymoCoreOpener *> *> *)openersSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("openers(subscriptionId:)")));
- (AnymoCoreCommonFlow<AnymoCoreScreen *> *)screenId:(int64_t)id __attribute__((swift_name("screen(id:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)syncWithCompletionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sync(completionHandler:)")));
@end;

__attribute__((swift_name("Alignment")))
@protocol AnymoCoreAlignment
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Block")))
@interface AnymoCoreBlock : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Button")))
@interface AnymoCoreBlockButton : AnymoCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(AnymoCoreLink * _Nullable)link style:(AnymoCoreBlockButtonStyle *)style __attribute__((swift_name("init(id:position:text:link:style:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreLink * _Nullable)component4 __attribute__((swift_name("component4()")));
- (AnymoCoreBlockButtonStyle *)component5 __attribute__((swift_name("component5()")));
- (AnymoCoreBlockButton *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(AnymoCoreLink * _Nullable)link style:(AnymoCoreBlockButtonStyle *)style __attribute__((swift_name("doCopy(id:position:text:link:style:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) AnymoCoreLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) AnymoCoreBlockButtonStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol AnymoCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface AnymoCoreKotlinEnum<E> : AnymoCoreBase <AnymoCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.ButtonStyle")))
@interface AnymoCoreBlockButtonStyle : AnymoCoreKotlinEnum<AnymoCoreBlockButtonStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreBlockButtonStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreBlockButtonStyle *primary __attribute__((swift_name("primary")));
@property (class, readonly) AnymoCoreBlockButtonStyle *secondary __attribute__((swift_name("secondary")));
+ (AnymoCoreKotlinArray<AnymoCoreBlockButtonStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.ButtonStyleCompanion")))
@interface AnymoCoreBlockButtonStyleCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreBlockButtonStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Image")))
@interface AnymoCoreBlockImage : AnymoCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position uri:(NSString *)uri __attribute__((swift_name("init(id:position:uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreBlockImage *)doCopyId:(int64_t)id position:(int32_t)position uri:(NSString *)uri __attribute__((swift_name("doCopy(id:position:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Spacer")))
@interface AnymoCoreBlockSpacer : AnymoCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position height:(int32_t)height __attribute__((swift_name("init(id:position:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreBlockSpacer *)doCopyId:(int64_t)id position:(int32_t)position height:(int32_t)height __attribute__((swift_name("doCopy(id:position:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Text")))
@interface AnymoCoreBlockText : AnymoCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text color:(NSString * _Nullable)color style:(AnymoCoreBlockTextStyle * _Nullable)style __attribute__((swift_name("init(id:position:text:color:style:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (AnymoCoreBlockTextStyle * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AnymoCoreBlockText *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text color:(NSString * _Nullable)color style:(AnymoCoreBlockTextStyle * _Nullable)style __attribute__((swift_name("doCopy(id:position:text:color:style:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) AnymoCoreBlockTextStyle * _Nullable style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.TextStyle")))
@interface AnymoCoreBlockTextStyle : AnymoCoreKotlinEnum<AnymoCoreBlockTextStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreBlockTextStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreBlockTextStyle *title __attribute__((swift_name("title")));
@property (class, readonly) AnymoCoreBlockTextStyle *subtitle __attribute__((swift_name("subtitle")));
+ (AnymoCoreKotlinArray<AnymoCoreBlockTextStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.TextStyleCompanion")))
@interface AnymoCoreBlockTextStyleCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreBlockTextStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockType")))
@interface AnymoCoreBlockType : AnymoCoreKotlinEnum<AnymoCoreBlockType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreBlockTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreBlockType *image __attribute__((swift_name("image")));
@property (class, readonly) AnymoCoreBlockType *text __attribute__((swift_name("text")));
@property (class, readonly) AnymoCoreBlockType *button __attribute__((swift_name("button")));
@property (class, readonly) AnymoCoreBlockType *spacer __attribute__((swift_name("spacer")));
+ (AnymoCoreKotlinArray<AnymoCoreBlockType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockType.Companion")))
@interface AnymoCoreBlockTypeCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreBlockTypeCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreBlockType * _Nullable)fromValueValue:(NSString *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalAlignment")))
@interface AnymoCoreHorizontalAlignment : AnymoCoreKotlinEnum<AnymoCoreHorizontalAlignment *> <AnymoCoreAlignment>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreHorizontalAlignmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreHorizontalAlignment *left __attribute__((swift_name("left")));
@property (class, readonly) AnymoCoreHorizontalAlignment *right __attribute__((swift_name("right")));
@property (class, readonly) AnymoCoreHorizontalAlignment *center __attribute__((swift_name("center")));
+ (AnymoCoreKotlinArray<AnymoCoreHorizontalAlignment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalAlignment.Companion")))
@interface AnymoCoreHorizontalAlignmentCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreHorizontalAlignmentCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Opener")))
@interface AnymoCoreOpener : AnymoCoreBase
- (instancetype)initWithScreenId:(int64_t)screenId title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(screenId:title:subtitle:imageUrl:backgroundColor:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AnymoCoreOpener *)doCopyScreenId:(int64_t)screenId title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("doCopy(screenId:title:subtitle:imageUrl:backgroundColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) int64_t screenId __attribute__((swift_name("screenId")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Page")))
@interface AnymoCorePage : AnymoCoreBase
- (instancetype)initWithId:(int64_t)id slots:(NSArray<AnymoCoreSlot *> *)slots verticalAlignment:(AnymoCoreVerticalAlignment * _Nullable)verticalAlignment horizontalAlignment:(AnymoCoreHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl __attribute__((swift_name("init(id:slots:verticalAlignment:horizontalAlignment:backgroundImageUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<AnymoCoreSlot *> *)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreVerticalAlignment * _Nullable)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreHorizontalAlignment * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AnymoCorePage *)doCopyId:(int64_t)id slots:(NSArray<AnymoCoreSlot *> *)slots verticalAlignment:(AnymoCoreVerticalAlignment * _Nullable)verticalAlignment horizontalAlignment:(AnymoCoreHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl __attribute__((swift_name("doCopy(id:slots:verticalAlignment:horizontalAlignment:backgroundImageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundImageUrl __attribute__((swift_name("backgroundImageUrl")));
@property (readonly) AnymoCoreHorizontalAlignment * _Nullable horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<AnymoCoreSlot *> *slots __attribute__((swift_name("slots")));
@property (readonly) AnymoCoreVerticalAlignment * _Nullable verticalAlignment __attribute__((swift_name("verticalAlignment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen")))
@interface AnymoCoreScreen : AnymoCoreBase
- (instancetype)initWithId:(int64_t)id subscriptionId:(NSString *)subscriptionId contentType:(AnymoCoreScreenContentType * _Nullable)contentType opener:(AnymoCoreOpener *)opener pages:(NSArray<AnymoCorePage *> *)pages __attribute__((swift_name("init(id:subscriptionId:contentType:opener:pages:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreScreenContentType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreOpener *)component4 __attribute__((swift_name("component4()")));
- (NSArray<AnymoCorePage *> *)component5 __attribute__((swift_name("component5()")));
- (AnymoCoreScreen *)doCopyId:(int64_t)id subscriptionId:(NSString *)subscriptionId contentType:(AnymoCoreScreenContentType * _Nullable)contentType opener:(AnymoCoreOpener *)opener pages:(NSArray<AnymoCorePage *> *)pages __attribute__((swift_name("doCopy(id:subscriptionId:contentType:opener:pages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreScreenContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) AnymoCoreOpener *opener __attribute__((swift_name("opener")));
@property (readonly) NSArray<AnymoCorePage *> *pages __attribute__((swift_name("pages")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.ContentType")))
@interface AnymoCoreScreenContentType : AnymoCoreKotlinEnum<AnymoCoreScreenContentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreScreenContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreScreenContentType *carousel __attribute__((swift_name("carousel")));
@property (class, readonly) AnymoCoreScreenContentType *story __attribute__((swift_name("story")));
+ (AnymoCoreKotlinArray<AnymoCoreScreenContentType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *apiValue __attribute__((swift_name("apiValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.ContentTypeCompanion")))
@interface AnymoCoreScreenContentTypeCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreScreenContentTypeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot")))
@interface AnymoCoreSlot : AnymoCoreBase
- (instancetype)initWithId:(int64_t)id position:(int32_t)position blocks:(NSArray<AnymoCoreBlock *> *)blocks __attribute__((swift_name("init(id:position:blocks:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<AnymoCoreBlock *> *)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreSlot *)doCopyId:(int64_t)id position:(int32_t)position blocks:(NSArray<AnymoCoreBlock *> *)blocks __attribute__((swift_name("doCopy(id:position:blocks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AnymoCoreBlock *> *blocks __attribute__((swift_name("blocks")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerticalAlignment")))
@interface AnymoCoreVerticalAlignment : AnymoCoreKotlinEnum<AnymoCoreVerticalAlignment *> <AnymoCoreAlignment>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreVerticalAlignmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreVerticalAlignment *top __attribute__((swift_name("top")));
@property (class, readonly) AnymoCoreVerticalAlignment *bottom __attribute__((swift_name("bottom")));
@property (class, readonly) AnymoCoreVerticalAlignment *center __attribute__((swift_name("center")));
+ (AnymoCoreKotlinArray<AnymoCoreVerticalAlignment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerticalAlignment.Companion")))
@interface AnymoCoreVerticalAlignmentCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreVerticalAlignmentCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle")))
@interface AnymoCoreAppStyle : AnymoCoreBase
- (instancetype)initWithPrimaryColor:(NSString *)primaryColor __attribute__((swift_name("init(primaryColor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AnymoCoreAppStyle *)doCopyPrimaryColor:(NSString *)primaryColor __attribute__((swift_name("doCopy(primaryColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *primaryColor __attribute__((swift_name("primaryColor")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol AnymoCoreKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnymoCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFlow")))
@interface AnymoCoreCommonFlow<T> : AnymoCoreBase <AnymoCoreKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<AnymoCoreKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnymoCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<AnymoCoreKtor_ioCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinksModule")))
@interface AnymoCoreLinksModule : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linksModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreLinksModule *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Link")))
@interface AnymoCoreLink : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("Link.Action")))
@interface AnymoCoreLinkAction : AnymoCoreLink
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionClose")))
@interface AnymoCoreLinkActionClose : AnymoCoreLinkAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)close __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreLinkActionClose *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionNext")))
@interface AnymoCoreLinkActionNext : AnymoCoreLinkAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)next __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreLinkActionNext *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("Link.Navigable")))
@interface AnymoCoreLinkNavigable : AnymoCoreLink
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.NavigableHttp")))
@interface AnymoCoreLinkNavigableHttp : AnymoCoreLinkNavigable
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AnymoCoreLinkNavigableHttp *)doCopyUri:(NSString *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol AnymoCoreRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<AnymoCoreRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<AnymoCoreRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AnymoDatabase")))
@protocol AnymoCoreAnymoDatabase <AnymoCoreRuntimeTransacter>
@required
@property (readonly) id<AnymoCoreAppStyleQueries> appStyleQueries __attribute__((swift_name("appStyleQueries")));
@property (readonly) id<AnymoCoreScreenQueries> screenQueries __attribute__((swift_name("screenQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoDatabaseCompanion")))
@interface AnymoCoreAnymoDatabaseCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreAnymoDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<AnymoCoreAnymoDatabase>)invokeDriver:(id<AnymoCoreRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<AnymoCoreRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle_")))
@interface AnymoCoreAppStyle_ : AnymoCoreBase
- (instancetype)initWithPrimary_color:(NSString *)primary_color __attribute__((swift_name("init(primary_color:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AnymoCoreAppStyle_ *)doCopyPrimary_color:(NSString *)primary_color __attribute__((swift_name("doCopy(primary_color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *primary_color __attribute__((swift_name("primary_color")));
@end;

__attribute__((swift_name("AppStyleQueries")))
@protocol AnymoCoreAppStyleQueries <AnymoCoreRuntimeTransacter>
@required
- (void)deleteAppStyle __attribute__((swift_name("deleteAppStyle()")));
- (void)insertAppStylePrimary_color:(NSString *)primary_color __attribute__((swift_name("insertAppStyle(primary_color:)")));
- (AnymoCoreRuntimeQuery<NSString *> *)selectAll __attribute__((swift_name("selectAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block_")))
@interface AnymoCoreBlock_ : AnymoCoreBase
- (instancetype)initWithBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value:(NSString *)value text_style:(NSString * _Nullable)text_style text_color:(NSString * _Nullable)text_color button_style:(NSString * _Nullable)button_style uri:(NSString * _Nullable)uri __attribute__((swift_name("init(block_id:slot_id:position:block_type:value:text_style:text_color:button_style:uri:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (AnymoCoreBlock_ *)doCopyBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value:(NSString *)value text_style:(NSString * _Nullable)text_style text_color:(NSString * _Nullable)text_color button_style:(NSString * _Nullable)button_style uri:(NSString * _Nullable)uri __attribute__((swift_name("doCopy(block_id:slot_id:position:block_type:value:text_style:text_color:button_style:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t block_id __attribute__((swift_name("block_id")));
@property (readonly) NSString *block_type __attribute__((swift_name("block_type")));
@property (readonly) NSString * _Nullable button_style __attribute__((swift_name("button_style")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int64_t slot_id __attribute__((swift_name("slot_id")));
@property (readonly) NSString * _Nullable text_color __attribute__((swift_name("text_color")));
@property (readonly) NSString * _Nullable text_style __attribute__((swift_name("text_style")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface AnymoCoreDatabaseDriverFactory : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AnymoCoreRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DbModule")))
@interface AnymoCoreDbModule : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dbModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreDbModule *shared __attribute__((swift_name("shared")));
- (void)buildDatabaseDriverFactory:(AnymoCoreDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("build(databaseDriverFactory:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Opener_")))
@interface AnymoCoreOpener_ : AnymoCoreBase
- (instancetype)initWithScreen_id:(int64_t)screen_id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url background_color:(NSString * _Nullable)background_color __attribute__((swift_name("init(screen_id:title:subtitle:image_url:background_color:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AnymoCoreOpener_ *)doCopyScreen_id:(int64_t)screen_id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url background_color:(NSString * _Nullable)background_color __attribute__((swift_name("doCopy(screen_id:title:subtitle:image_url:background_color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable background_color __attribute__((swift_name("background_color")));
@property (readonly) NSString * _Nullable image_url __attribute__((swift_name("image_url")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Page_")))
@interface AnymoCorePage_ : AnymoCoreBase
- (instancetype)initWithPage_id:(int64_t)page_id screen_id:(int64_t)screen_id vertical_alignment:(NSString * _Nullable)vertical_alignment horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("init(page_id:screen_id:vertical_alignment:horizontal_alignment:background_image_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AnymoCorePage_ *)doCopyPage_id:(int64_t)page_id screen_id:(int64_t)screen_id vertical_alignment:(NSString * _Nullable)vertical_alignment horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("doCopy(page_id:screen_id:vertical_alignment:horizontal_alignment:background_image_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable background_image_url __attribute__((swift_name("background_image_url")));
@property (readonly) NSString * _Nullable horizontal_alignment __attribute__((swift_name("horizontal_alignment")));
@property (readonly) int64_t page_id __attribute__((swift_name("page_id")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable vertical_alignment __attribute__((swift_name("vertical_alignment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen_")))
@interface AnymoCoreScreen_ : AnymoCoreBase
- (instancetype)initWithScreen_id:(int64_t)screen_id subscription_id:(NSString *)subscription_id content_type:(NSString * _Nullable)content_type __attribute__((swift_name("init(screen_id:subscription_id:content_type:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreScreen_ *)doCopyScreen_id:(int64_t)screen_id subscription_id:(NSString *)subscription_id content_type:(NSString * _Nullable)content_type __attribute__((swift_name("doCopy(screen_id:subscription_id:content_type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content_type __attribute__((swift_name("content_type")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString *subscription_id __attribute__((swift_name("subscription_id")));
@end;

__attribute__((swift_name("ScreenQueries")))
@protocol AnymoCoreScreenQueries <AnymoCoreRuntimeTransacter>
@required
- (void)deleteAllBlocks __attribute__((swift_name("deleteAllBlocks()")));
- (void)deleteAllOpeners __attribute__((swift_name("deleteAllOpeners()")));
- (void)deleteAllPages __attribute__((swift_name("deleteAllPages()")));
- (void)deleteAllScreens __attribute__((swift_name("deleteAllScreens()")));
- (void)insertBlockBlock:(AnymoCoreBlock_ *)block __attribute__((swift_name("insertBlock(block:)")));
- (void)insertOpenerOpener:(AnymoCoreOpener_ *)opener __attribute__((swift_name("insertOpener(opener:)")));
- (void)insertPagePage:(AnymoCorePage_ *)page __attribute__((swift_name("insertPage(page:)")));
- (void)insertScreenScreen:(AnymoCoreScreen_ *)screen __attribute__((swift_name("insertScreen(screen:)")));
- (void)insertSlotSlot:(AnymoCoreSlot_ *)slot __attribute__((swift_name("insertSlot(slot:)")));
- (AnymoCoreRuntimeQuery<AnymoCoreOpener_ *> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString *)subscription_id __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:)")));
- (AnymoCoreRuntimeQuery<id> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString *)subscription_id mapper:(id (^)(AnymoCoreLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:mapper:)")));
- (AnymoCoreRuntimeQuery<AnymoCoreBlock_ *> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id __attribute__((swift_name("selectBlockForSlotId(slot_id:)")));
- (AnymoCoreRuntimeQuery<id> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id mapper:(id (^)(AnymoCoreLong *, AnymoCoreLong *, AnymoCoreInt *, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectBlockForSlotId(slot_id:mapper:)")));
- (AnymoCoreRuntimeQuery<AnymoCoreOpener_ *> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectOpenerForScreenId(screen_id:)")));
- (AnymoCoreRuntimeQuery<id> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(AnymoCoreLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectOpenerForScreenId(screen_id:mapper:)")));
- (AnymoCoreRuntimeQuery<AnymoCorePage_ *> *)selectPageForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectPageForScreenId(screen_id:)")));
- (AnymoCoreRuntimeQuery<id> *)selectPageForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(AnymoCoreLong *, AnymoCoreLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectPageForScreenId(screen_id:mapper:)")));
- (AnymoCoreRuntimeQuery<AnymoCoreScreen_ *> *)selectScreenForIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectScreenForId(screen_id:)")));
- (AnymoCoreRuntimeQuery<id> *)selectScreenForIdScreen_id:(int64_t)screen_id mapper:(id (^)(AnymoCoreLong *, NSString *, NSString * _Nullable))mapper __attribute__((swift_name("selectScreenForId(screen_id:mapper:)")));
- (AnymoCoreRuntimeQuery<AnymoCoreSlot_ *> *)selectSlotForPageIdPage_id:(int64_t)page_id __attribute__((swift_name("selectSlotForPageId(page_id:)")));
- (AnymoCoreRuntimeQuery<id> *)selectSlotForPageIdPage_id:(int64_t)page_id mapper:(id (^)(AnymoCoreLong *, AnymoCoreLong *, AnymoCoreInt *))mapper __attribute__((swift_name("selectSlotForPageId(page_id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot_")))
@interface AnymoCoreSlot_ : AnymoCoreBase
- (instancetype)initWithSlot_id:(int64_t)slot_id page_id:(int64_t)page_id position:(int32_t)position __attribute__((swift_name("init(slot_id:page_id:position:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreSlot_ *)doCopySlot_id:(int64_t)slot_id page_id:(int64_t)page_id position:(int32_t)position __attribute__((swift_name("doCopy(slot_id:page_id:position:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t page_id __attribute__((swift_name("page_id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int64_t slot_id __attribute__((swift_name("slot_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiModule")))
@interface AnymoCoreApiModule : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)apiModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreApiModule *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_client_coreHttpClient *)provideHttpClientJson:(AnymoCoreKotlinx_serialization_jsonJson *)json __attribute__((swift_name("provideHttpClient(json:)")));
- (AnymoCoreKotlinx_serialization_jsonJson *)provideJson __attribute__((swift_name("provideJson()")));
- (void)fromEndpoint:(AnymoCoreKtor_client_coreHttpRequestBuilder *)receiver path:(NSString *)path __attribute__((swift_name("fromEndpoint(_:path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowKt")))
@interface AnymoCoreFlowKt : AnymoCoreBase
+ (AnymoCoreCommonFlow<id> *)asCommonFlow:(id<AnymoCoreKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("asCommonFlow(_:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface AnymoCoreKotlinThrowable : AnymoCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (AnymoCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface AnymoCoreKotlinException : AnymoCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface AnymoCoreKotlinRuntimeException : AnymoCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AnymoCoreKotlinIllegalStateException : AnymoCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface AnymoCoreKotlinCancellationException : AnymoCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AnymoCoreKotlinUnit : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AnymoCoreKotlinEnumCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AnymoCoreKotlinArray<T> : AnymoCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AnymoCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AnymoCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol AnymoCoreKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AnymoCoreKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol AnymoCoreRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol AnymoCoreRuntimeTransactionWithoutReturn <AnymoCoreRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<AnymoCoreRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol AnymoCoreRuntimeTransactionWithReturn <AnymoCoreRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<AnymoCoreRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol AnymoCoreRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol AnymoCoreRuntimeSqlDriver <AnymoCoreRuntimeCloseable>
@required
- (AnymoCoreRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(AnymoCoreInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AnymoCoreRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<AnymoCoreRuntimeSqlCursor>)executeQueryIdentifier:(AnymoCoreInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AnymoCoreRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (AnymoCoreRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol AnymoCoreRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<AnymoCoreRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<AnymoCoreRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface AnymoCoreRuntimeQuery<__covariant RowType> : AnymoCoreBase
- (instancetype)initWithQueries:(NSMutableArray<AnymoCoreRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<AnymoCoreRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<AnymoCoreRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<AnymoCoreRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<AnymoCoreRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<AnymoCoreRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AnymoCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AnymoCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface AnymoCoreKtor_client_coreHttpClient : AnymoCoreBase <AnymoCoreKotlinx_coroutines_coreCoroutineScope, AnymoCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<AnymoCoreKtor_client_coreHttpClientEngine>)engine userConfig:(AnymoCoreKtor_client_coreHttpClientConfig<AnymoCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (AnymoCoreKtor_client_coreHttpClient *)configBlock:(void (^)(AnymoCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(AnymoCoreKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(AnymoCoreKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<AnymoCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnymoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<AnymoCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<AnymoCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) AnymoCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) AnymoCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) AnymoCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) AnymoCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) AnymoCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol AnymoCoreKotlinx_serialization_coreSerialFormat
@required
@property (readonly) AnymoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol AnymoCoreKotlinx_serialization_coreStringFormat <AnymoCoreKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface AnymoCoreKotlinx_serialization_jsonJson : AnymoCoreBase <AnymoCoreKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(AnymoCoreKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(AnymoCoreKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(AnymoCoreKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (AnymoCoreKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (AnymoCoreKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) AnymoCoreKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) AnymoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol AnymoCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) AnymoCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface AnymoCoreKtor_client_coreHttpRequestBuilder : AnymoCoreBase <AnymoCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) AnymoCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AnymoCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<AnymoCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<AnymoCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<AnymoCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (AnymoCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(AnymoCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (AnymoCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(AnymoCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(AnymoCoreKtor_httpURLBuilder *, AnymoCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<AnymoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<AnymoCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) AnymoCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property AnymoCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnymoCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AnymoCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface AnymoCoreRuntimeTransacterTransaction : AnymoCoreBase <AnymoCoreRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) AnymoCoreRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol AnymoCoreRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(AnymoCoreKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(AnymoCoreDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(AnymoCoreLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol AnymoCoreRuntimeSqlCursor <AnymoCoreRuntimeCloseable>
@required
- (AnymoCoreKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (AnymoCoreDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (AnymoCoreLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol AnymoCoreRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AnymoCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AnymoCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AnymoCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<AnymoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AnymoCoreKotlinCoroutineContext>)minusKeyKey:(id<AnymoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AnymoCoreKotlinCoroutineContext>)plusContext:(id<AnymoCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol AnymoCoreKtor_client_coreHttpClientEngine <AnymoCoreKotlinx_coroutines_coreCoroutineScope, AnymoCoreKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(AnymoCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(AnymoCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(AnymoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) AnymoCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<AnymoCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface AnymoCoreKtor_client_coreHttpClientEngineConfig : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property AnymoCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) AnymoCoreKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface AnymoCoreKtor_client_coreHttpClientConfig<T> : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnymoCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(AnymoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<AnymoCoreKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(AnymoCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(AnymoCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface AnymoCoreKtor_client_coreHttpClientCall : AnymoCoreBase <AnymoCoreKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) AnymoCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<AnymoCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(AnymoCoreKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<AnymoCoreKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<AnymoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnymoCoreKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<AnymoCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<AnymoCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) AnymoCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol AnymoCoreKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol AnymoCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<AnymoCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AnymoCoreKotlinCoroutineContextElement <AnymoCoreKotlinCoroutineContext>
@required
@property (readonly) id<AnymoCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface AnymoCoreKotlinAbstractCoroutineContextElement : AnymoCoreBase <AnymoCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<AnymoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AnymoCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol AnymoCoreKotlinContinuationInterceptor <AnymoCoreKotlinCoroutineContextElement>
@required
- (id<AnymoCoreKotlinContinuation>)interceptContinuationContinuation:(id<AnymoCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<AnymoCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher : AnymoCoreKotlinAbstractCoroutineContextElement <AnymoCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<AnymoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<AnymoCoreKotlinCoroutineContext>)context block:(id<AnymoCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<AnymoCoreKotlinCoroutineContext>)context block:(id<AnymoCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<AnymoCoreKotlinContinuation>)interceptContinuationContinuation:(id<AnymoCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<AnymoCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<AnymoCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface AnymoCoreKtor_utilsPipeline<TSubject, TContext> : AnymoCoreBase
- (instancetype)initWithPhase:(AnymoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnymoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnymoCoreKotlinArray<AnymoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(AnymoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(AnymoCoreKtor_utilsPipelinePhase *)reference phase:(AnymoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(AnymoCoreKtor_utilsPipelinePhase *)reference phase:(AnymoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(AnymoCoreKtor_utilsPipelinePhase *)phase block:(id<AnymoCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(AnymoCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<AnymoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<AnymoCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface AnymoCoreKtor_client_coreHttpReceivePipeline : AnymoCoreKtor_utilsPipeline<AnymoCoreKtor_client_coreHttpResponse *, AnymoCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AnymoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnymoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AnymoCoreKotlinArray<AnymoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface AnymoCoreKtor_client_coreHttpRequestPipeline : AnymoCoreKtor_utilsPipeline<id, AnymoCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AnymoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnymoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AnymoCoreKotlinArray<AnymoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface AnymoCoreKtor_client_coreHttpResponsePipeline : AnymoCoreKtor_utilsPipeline<AnymoCoreKtor_client_coreHttpResponseContainer *, AnymoCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AnymoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnymoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AnymoCoreKotlinArray<AnymoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface AnymoCoreKtor_client_coreHttpSendPipeline : AnymoCoreKtor_utilsPipeline<id, AnymoCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AnymoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnymoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(AnymoCoreKotlinArray<AnymoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AnymoCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AnymoCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AnymoCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AnymoCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AnymoCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AnymoCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AnymoCoreKotlinx_serialization_coreSerializersModule : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<AnymoCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<AnymoCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AnymoCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AnymoCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<AnymoCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AnymoCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AnymoCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface AnymoCoreKotlinx_serialization_jsonJsonConfiguration : AnymoCoreBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface AnymoCoreKotlinx_serialization_jsonJsonDefault : AnymoCoreKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(AnymoCoreKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(AnymoCoreKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface AnymoCoreKotlinx_serialization_jsonJsonElement : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) AnymoCoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface AnymoCoreKtor_utilsStringValuesBuilder : AnymoCoreBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AnymoCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AnymoCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AnymoCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnymoCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) AnymoCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface AnymoCoreKtor_httpHeadersBuilder : AnymoCoreKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<AnymoCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface AnymoCoreKtor_client_coreHttpRequestBuilderCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface AnymoCoreKtor_client_coreHttpRequestData : AnymoCoreBase
- (instancetype)initWithUrl:(AnymoCoreKtor_httpUrl *)url method:(AnymoCoreKtor_httpHttpMethod *)method headers:(id<AnymoCoreKtor_httpHeaders>)headers body:(AnymoCoreKtor_httpOutgoingContent *)body executionContext:(id<AnymoCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<AnymoCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<AnymoCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnymoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnymoCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<AnymoCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<AnymoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnymoCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface AnymoCoreKtor_httpURLBuilder : AnymoCoreBase
- (instancetype)initWithProtocol:(AnymoCoreKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(AnymoCoreKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AnymoCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (AnymoCoreKtor_httpURLBuilder *)pathComponents:(AnymoCoreKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (AnymoCoreKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) AnymoCoreKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property AnymoCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol AnymoCoreKotlinx_coroutines_coreJob <AnymoCoreKotlinCoroutineContextElement>
@required
- (id<AnymoCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<AnymoCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(AnymoCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (AnymoCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<AnymoCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(AnymoCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<AnymoCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(AnymoCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<AnymoCoreKotlinx_coroutines_coreJob>)plusOther_:(id<AnymoCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<AnymoCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<AnymoCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface AnymoCoreKtor_httpHttpMethod : AnymoCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AnymoCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AnymoCoreKotlinByteArray : AnymoCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AnymoCoreByte *(^)(AnymoCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AnymoCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AnymoCoreKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface AnymoCoreKtor_client_coreHttpResponseData : AnymoCoreBase
- (instancetype)initWithStatusCode:(AnymoCoreKtor_httpHttpStatusCode *)statusCode requestTime:(AnymoCoreKtor_utilsGMTDate *)requestTime headers:(id<AnymoCoreKtor_httpHeaders>)headers version:(AnymoCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<AnymoCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<AnymoCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<AnymoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnymoCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AnymoCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface AnymoCoreKtor_client_coreProxyConfig : AnymoCoreBase
- (instancetype)initWithUrl:(AnymoCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AnymoCoreKotlinNothing : AnymoCoreBase
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol AnymoCoreKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(AnymoCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) AnymoCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface AnymoCoreKtor_client_coreHttpClientCallCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol AnymoCoreKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(AnymoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(AnymoCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(AnymoCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(AnymoCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AnymoCoreKtor_ioIoBuffer *)dst completionHandler:(void (^)(AnymoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AnymoCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AnymoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AnymoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AnymoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(AnymoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(AnymoCoreByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(AnymoCoreDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(AnymoCoreFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AnymoCoreKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AnymoCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(AnymoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(AnymoCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(AnymoCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(AnymoCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<AnymoCoreKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(AnymoCoreShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<AnymoCoreKotlinSuspendFunction1>)consumer completionHandler:(void (^)(AnymoCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<AnymoCoreKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(AnymoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) AnymoCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property AnymoCoreKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol AnymoCoreKtor_utilsTypeInfo
@required
@property (readonly) id<AnymoCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<AnymoCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<AnymoCoreKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface AnymoCoreKtor_client_coreTypeInfo : AnymoCoreBase <AnymoCoreKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<AnymoCoreKotlinKClass>)type reifiedType:(id<AnymoCoreKotlinKType>)reifiedType kotlinType:(id<AnymoCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<AnymoCoreKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<AnymoCoreKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<AnymoCoreKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreKtor_client_coreTypeInfo *)doCopyType:(id<AnymoCoreKotlinKClass>)type reifiedType:(id<AnymoCoreKotlinKType>)reifiedType kotlinType:(id<AnymoCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnymoCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<AnymoCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<AnymoCoreKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol AnymoCoreKtor_httpHttpMessage
@required
@property (readonly) id<AnymoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol AnymoCoreKtor_client_coreHttpRequest <AnymoCoreKtor_httpHttpMessage, AnymoCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<AnymoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnymoCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) AnymoCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnymoCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface AnymoCoreKtor_client_coreHttpResponse : AnymoCoreBase <AnymoCoreKtor_httpHttpMessage, AnymoCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<AnymoCoreKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) AnymoCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AnymoCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface AnymoCoreKtor_utilsAttributeKey<T> : AnymoCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol AnymoCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<AnymoCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface AnymoCoreKotlinAbstractCoroutineContextKey<B, E> : AnymoCoreBase <AnymoCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<AnymoCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<AnymoCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface AnymoCoreKotlinx_coroutines_coreCoroutineDispatcherKey : AnymoCoreKotlinAbstractCoroutineContextKey<id<AnymoCoreKotlinContinuationInterceptor>, AnymoCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<AnymoCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<AnymoCoreKotlinCoroutineContextElement> _Nullable (^)(id<AnymoCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol AnymoCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface AnymoCoreKtor_utilsPipelinePhase : AnymoCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol AnymoCoreKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol AnymoCoreKotlinSuspendFunction2 <AnymoCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface AnymoCoreKtor_client_coreHttpReceivePipelinePhases : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface AnymoCoreKtor_client_coreHttpRequestPipelinePhases : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface AnymoCoreKtor_client_coreHttpResponsePipelinePhases : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface AnymoCoreKtor_client_coreHttpResponseContainer : AnymoCoreBase
- (instancetype)initWithExpectedType:(id<AnymoCoreKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(AnymoCoreKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (AnymoCoreKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(AnymoCoreKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface AnymoCoreKtor_client_coreHttpSendPipelinePhases : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AnymoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AnymoCoreKotlinx_serialization_coreDecoder
@required
- (id<AnymoCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AnymoCoreKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AnymoCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AnymoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AnymoCoreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<AnymoCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<AnymoCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) AnymoCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AnymoCoreKotlinx_serialization_coreEncoder
@required
- (id<AnymoCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AnymoCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AnymoCoreKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AnymoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AnymoCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AnymoCoreKotlinKClass>)kClass provider:(id<AnymoCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AnymoCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AnymoCoreKotlinKClass>)kClass serializer:(id<AnymoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AnymoCoreKotlinKClass>)baseClass actualClass:(id<AnymoCoreKotlinKClass>)actualClass actualSerializer:(id<AnymoCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AnymoCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AnymoCoreKotlinx_serialization_coreKSerializer <AnymoCoreKotlinx_serialization_coreSerializationStrategy, AnymoCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AnymoCoreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AnymoCoreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AnymoCoreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AnymoCoreKotlinKClass <AnymoCoreKotlinKDeclarationContainer, AnymoCoreKotlinKAnnotatedElement, AnymoCoreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface AnymoCoreKotlinx_serialization_jsonJsonElementCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<AnymoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol AnymoCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnymoCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol AnymoCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol AnymoCoreKtor_httpHeaders <AnymoCoreKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface AnymoCoreKtor_httpUrl : AnymoCoreBase
- (instancetype)initWithProtocol:(AnymoCoreKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<AnymoCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (AnymoCoreKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<AnymoCoreKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (AnymoCoreKtor_httpUrl *)doCopyProtocol:(AnymoCoreKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<AnymoCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AnymoCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AnymoCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface AnymoCoreKtor_httpOutgoingContent : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(AnymoCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) AnymoCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) AnymoCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<AnymoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface AnymoCoreKtor_httpURLProtocol : AnymoCoreBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface AnymoCoreKtor_httpParametersBuilder : AnymoCoreKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(AnymoCoreKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<AnymoCoreKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property AnymoCoreKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface AnymoCoreKtor_httpURLBuilderCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol AnymoCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol AnymoCoreKotlinx_coroutines_coreChildHandle <AnymoCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(AnymoCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<AnymoCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol AnymoCoreKotlinx_coroutines_coreChildJob <AnymoCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<AnymoCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol AnymoCoreKotlinSequence
@required
- (id<AnymoCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol AnymoCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<AnymoCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<AnymoCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface AnymoCoreKtor_httpHttpMethodCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<AnymoCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) AnymoCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface AnymoCoreKotlinByteIterator : AnymoCoreBase <AnymoCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnymoCoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface AnymoCoreKtor_httpHttpStatusCode : AnymoCoreBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (AnymoCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface AnymoCoreKtor_utilsGMTDate : AnymoCoreBase <AnymoCoreKotlinComparable>
@property (class, readonly, getter=companion) AnymoCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AnymoCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (AnymoCoreKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (AnymoCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(AnymoCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(AnymoCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) AnymoCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) AnymoCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface AnymoCoreKtor_httpHttpProtocolVersion : AnymoCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (AnymoCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface AnymoCoreKtor_ioMemory : AnymoCoreBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(AnymoCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(AnymoCoreKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (AnymoCoreKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (AnymoCoreKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface AnymoCoreKtor_ioBuffer : AnymoCoreBase
- (instancetype)initWithMemory:(AnymoCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (AnymoCoreKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(AnymoCoreKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) AnymoCoreKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface AnymoCoreKtor_ioChunkBuffer : AnymoCoreKtor_ioBuffer
- (instancetype)initWithMemory:(AnymoCoreKtor_ioMemory *)memory origin:(AnymoCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<AnymoCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(AnymoCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (AnymoCoreKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (AnymoCoreKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) AnymoCoreKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) AnymoCoreKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol AnymoCoreKtor_ioInput <AnymoCoreKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(AnymoCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property AnymoCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol AnymoCoreKotlinAppendable
@required
- (id<AnymoCoreKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<AnymoCoreKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<AnymoCoreKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol AnymoCoreKtor_ioOutput <AnymoCoreKotlinAppendable, AnymoCoreKtor_ioCloseable>
@required
- (id<AnymoCoreKotlinAppendable>)appendCsq:(AnymoCoreKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property AnymoCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface AnymoCoreKtor_ioIoBuffer : AnymoCoreKtor_ioChunkBuffer <AnymoCoreKtor_ioInput, AnymoCoreKtor_ioOutput>
- (instancetype)initWithMemory:(AnymoCoreKtor_ioMemory *)memory origin:(AnymoCoreKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(AnymoCoreKtor_ioMemory *)memory origin:(AnymoCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<AnymoCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<AnymoCoreKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<AnymoCoreKotlinAppendable>)appendCsq:(AnymoCoreKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<AnymoCoreKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<AnymoCoreKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(AnymoCoreKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (AnymoCoreKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (AnymoCoreKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(AnymoCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(AnymoCoreInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(AnymoCoreInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property AnymoCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface AnymoCoreKtor_ioAbstractInput : AnymoCoreBase <AnymoCoreKtor_ioInput>
- (instancetype)initWithHead:(AnymoCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (AnymoCoreKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(AnymoCoreKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (AnymoCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(AnymoCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(AnymoCoreKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(AnymoCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (AnymoCoreKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<AnymoCoreKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<AnymoCoreKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property AnymoCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<AnymoCoreKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface AnymoCoreKtor_ioByteReadPacketBase : AnymoCoreKtor_ioAbstractInput
- (instancetype)initWithHead:(AnymoCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface AnymoCoreKtor_ioByteReadPacketPlatformBase : AnymoCoreKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(AnymoCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface AnymoCoreKtor_ioByteReadPacket : AnymoCoreKtor_ioByteReadPacketPlatformBase <AnymoCoreKtor_ioInput>
- (instancetype)initWithHead:(AnymoCoreKtor_ioChunkBuffer *)head pool:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(AnymoCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnymoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (AnymoCoreKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (AnymoCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(AnymoCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol AnymoCoreKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (AnymoCoreKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol AnymoCoreKotlinSuspendFunction1 <AnymoCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface AnymoCoreKtor_ioByteOrder : AnymoCoreKotlinEnum<AnymoCoreKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) AnymoCoreKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (AnymoCoreKotlinArray<AnymoCoreKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol AnymoCoreKotlinKType
@required
@property (readonly) NSArray<AnymoCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<AnymoCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AnymoCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AnymoCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AnymoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AnymoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AnymoCoreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AnymoCoreKotlinx_serialization_coreSerialKind : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AnymoCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AnymoCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AnymoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AnymoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AnymoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol AnymoCoreKtor_httpParameters <AnymoCoreKtor_utilsStringValues>
@required
@property (readonly) AnymoCoreKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface AnymoCoreKtor_httpUrlCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface AnymoCoreKtor_httpHeaderValueWithParameters : AnymoCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AnymoCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<AnymoCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface AnymoCoreKtor_httpContentType : AnymoCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<AnymoCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AnymoCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(AnymoCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (AnymoCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (AnymoCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface AnymoCoreKtor_httpURLProtocolCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) AnymoCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) AnymoCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) AnymoCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) AnymoCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) AnymoCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, AnymoCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface AnymoCoreKtor_httpUrlEncodingOption : AnymoCoreKotlinEnum<AnymoCoreKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AnymoCoreKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) AnymoCoreKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) AnymoCoreKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) AnymoCoreKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (AnymoCoreKotlinArray<AnymoCoreKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol AnymoCoreKotlinx_coroutines_coreParentJob <AnymoCoreKotlinx_coroutines_coreJob>
@required
- (AnymoCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol AnymoCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<AnymoCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(AnymoCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(AnymoCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<AnymoCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol AnymoCoreKotlinSuspendFunction0 <AnymoCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface AnymoCoreKtor_httpHttpStatusCodeCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) AnymoCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<AnymoCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface AnymoCoreKtor_utilsGMTDateCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface AnymoCoreKtor_utilsWeekDay : AnymoCoreKotlinEnum<AnymoCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) AnymoCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (AnymoCoreKotlinArray<AnymoCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface AnymoCoreKtor_utilsMonth : AnymoCoreKotlinEnum<AnymoCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnymoCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) AnymoCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (AnymoCoreKotlinArray<AnymoCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface AnymoCoreKtor_httpHttpProtocolVersionCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (AnymoCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) AnymoCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface AnymoCoreKtor_ioMemoryCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface AnymoCoreKtor_ioBufferCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol AnymoCoreKtor_ioObjectPool <AnymoCoreKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface AnymoCoreKtor_ioChunkBufferCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<AnymoCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<AnymoCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface AnymoCoreKotlinCharArray : AnymoCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(AnymoCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AnymoCoreKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface AnymoCoreKtor_ioIoBufferCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<AnymoCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<AnymoCoreKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<AnymoCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface AnymoCoreKtor_ioAbstractInputCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface AnymoCoreKtor_ioByteReadPacketBaseCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface AnymoCoreKtor_ioByteReadPacketCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnymoCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface AnymoCoreKtor_ioByteOrderCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface AnymoCoreKotlinKTypeProjection : AnymoCoreBase
- (instancetype)initWithVariance:(AnymoCoreKotlinKVariance * _Nullable)variance type:(id<AnymoCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnymoCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (AnymoCoreKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<AnymoCoreKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreKotlinKTypeProjection *)doCopyVariance:(AnymoCoreKotlinKVariance * _Nullable)variance type:(id<AnymoCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnymoCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) AnymoCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface AnymoCoreKtor_httpHeaderValueParam : AnymoCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AnymoCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface AnymoCoreKtor_httpHeaderValueWithParametersCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<AnymoCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface AnymoCoreKtor_httpContentTypeCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) AnymoCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface AnymoCoreKotlinx_coroutines_coreAtomicDesc : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface AnymoCoreKotlinx_coroutines_coreOpDescriptor : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(AnymoCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : AnymoCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface AnymoCoreKtor_utilsWeekDayCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AnymoCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface AnymoCoreKtor_utilsMonthCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AnymoCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface AnymoCoreKotlinCharIterator : AnymoCoreBase <AnymoCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface AnymoCoreKotlinKVariance : AnymoCoreKotlinEnum<AnymoCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AnymoCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) AnymoCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) AnymoCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (AnymoCoreKotlinArray<AnymoCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface AnymoCoreKotlinKTypeProjectionCompanion : AnymoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnymoCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (AnymoCoreKotlinKTypeProjection *)contravariantType:(id<AnymoCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (AnymoCoreKotlinKTypeProjection *)covariantType:(id<AnymoCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (AnymoCoreKotlinKTypeProjection *)invariantType:(id<AnymoCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) AnymoCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface AnymoCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : AnymoCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode : AnymoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(AnymoCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(AnymoCoreBoolean *(^)(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(AnymoCoreBoolean *(^)(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(AnymoCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(AnymoCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : AnymoCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(AnymoCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(AnymoCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(AnymoCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(AnymoCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) AnymoCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
