#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UnflowCoreUnflowEvent, UnflowCoreUnflowEventCompanion, UnflowCoreUnflowEventActionInteraction, UnflowCoreUnflowEventAction, UnflowCoreKotlinEnumCompanion, UnflowCoreKotlinEnum<E>, UnflowCoreKotlinArray<T>, UnflowCoreUnflowEventScreen, UnflowCoreKotlinPair<__covariant A, __covariant B>, UnflowCoreAnymoSdk, UnflowCoreAnymoSdkConfig, UnflowCoreDatabaseDriverFactory, UnflowCoreAnymoComponent, UnflowCoreContentModule, UnflowCoreAppStyle, UnflowCoreKotlinUnit, UnflowCoreScreen, UnflowCoreCommonFlow<T>, UnflowCoreOpener, UnflowCoreBlock, UnflowCoreLink, UnflowCoreBlockButtonStyle, UnflowCoreBlockButton, UnflowCoreBlockButtonStyleCompanion, UnflowCoreBlockImage, UnflowCoreBlockSpacer, UnflowCoreBlockTextStyle, UnflowCoreBlockText, UnflowCoreBlockTextStyleCompanion, UnflowCoreBlockTypeCompanion, UnflowCoreBlockType, UnflowCoreHorizontalAlignmentCompanion, UnflowCoreHorizontalAlignment, UnflowCoreSlot, UnflowCoreVerticalAlignment, UnflowCorePage, UnflowCoreScreenContentType, UnflowCoreScreenContentTypeCompanion, UnflowCoreVerticalAlignmentCompanion, UnflowCoreAnalyticsModule, UnflowCoreLinksModule, UnflowCoreLinkAction, UnflowCoreLinkActionClose, UnflowCoreLinkActionNext, UnflowCoreLinkNavigable, UnflowCoreLinkNavigableHttp, UnflowCoreLinkNavigableOther, UnflowCoreAnymoDatabaseCompanion, UnflowCoreAppStyle_, UnflowCoreRuntimeQuery<__covariant RowType>, UnflowCoreBlock_, UnflowCoreRuntimeAfterVersionWithDriver, UnflowCoreDbModule, UnflowCoreOpener_, UnflowCorePage_, UnflowCoreScreen_, UnflowCoreSlot_, UnflowCoreApiModule, UnflowCoreKtor_client_coreHttpClient, UnflowCoreKotlinx_serialization_jsonJson, UnflowCoreKtor_client_coreHttpRequestBuilder, UnflowCoreKotlinThrowable, UnflowCoreKotlinException, UnflowCoreKotlinRuntimeException, UnflowCoreKotlinIllegalStateException, UnflowCoreRuntimeTransacterTransaction, UnflowCoreKtor_client_coreHttpClientEngineConfig, UnflowCoreKtor_client_coreHttpClientConfig<T>, UnflowCoreKtor_client_coreHttpClientCall, UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher, UnflowCoreKtor_client_coreHttpReceivePipeline, UnflowCoreKtor_client_coreHttpRequestPipeline, UnflowCoreKtor_client_coreHttpResponsePipeline, UnflowCoreKtor_client_coreHttpSendPipeline, UnflowCoreKotlinx_serialization_coreSerializersModule, UnflowCoreKotlinx_serialization_jsonJsonConfiguration, UnflowCoreKotlinx_serialization_jsonJsonDefault, UnflowCoreKotlinx_serialization_jsonJsonElement, UnflowCoreKtor_httpHeadersBuilder, UnflowCoreKtor_client_coreHttpRequestBuilderCompanion, UnflowCoreKtor_client_coreHttpRequestData, UnflowCoreKtor_httpURLBuilder, UnflowCoreKtor_httpHttpMethod, UnflowCoreKotlinByteArray, UnflowCoreKtor_client_coreHttpResponseData, UnflowCoreKtor_client_coreProxyConfig, UnflowCoreKotlinNothing, UnflowCoreKtor_client_coreHttpClientCallCompanion, UnflowCoreKtor_client_coreTypeInfo, UnflowCoreKtor_client_coreHttpResponse, UnflowCoreKtor_utilsAttributeKey<T>, UnflowCoreKotlinAbstractCoroutineContextElement, UnflowCoreKotlinx_coroutines_coreCoroutineDispatcherKey, UnflowCoreKtor_utilsPipelinePhase, UnflowCoreKtor_utilsPipeline<TSubject, TContext>, UnflowCoreKtor_client_coreHttpReceivePipelinePhases, UnflowCoreKtor_client_coreHttpRequestPipelinePhases, UnflowCoreKtor_client_coreHttpResponsePipelinePhases, UnflowCoreKtor_client_coreHttpResponseContainer, UnflowCoreKtor_client_coreHttpSendPipelinePhases, UnflowCoreKotlinx_serialization_jsonJsonElementCompanion, UnflowCoreKtor_utilsStringValuesBuilder, UnflowCoreKtor_httpUrl, UnflowCoreKtor_httpOutgoingContent, UnflowCoreKtor_httpURLProtocol, UnflowCoreKtor_httpParametersBuilder, UnflowCoreKtor_httpURLBuilderCompanion, UnflowCoreKotlinCancellationException, UnflowCoreKtor_httpHttpMethodCompanion, UnflowCoreKotlinByteIterator, UnflowCoreKtor_httpHttpStatusCode, UnflowCoreKtor_utilsGMTDate, UnflowCoreKtor_httpHttpProtocolVersion, UnflowCoreKtor_ioMemory, UnflowCoreKtor_ioIoBuffer, UnflowCoreKtor_ioByteReadPacket, UnflowCoreKtor_ioByteOrder, UnflowCoreKotlinAbstractCoroutineContextKey<B, E>, UnflowCoreKotlinx_serialization_coreSerialKind, UnflowCoreKtor_httpUrlCompanion, UnflowCoreKtor_httpContentType, UnflowCoreKtor_httpURLProtocolCompanion, UnflowCoreKtor_httpUrlEncodingOption, UnflowCoreKtor_httpHttpStatusCodeCompanion, UnflowCoreKtor_utilsGMTDateCompanion, UnflowCoreKtor_utilsWeekDay, UnflowCoreKtor_utilsMonth, UnflowCoreKtor_httpHttpProtocolVersionCompanion, UnflowCoreKtor_ioMemoryCompanion, UnflowCoreKtor_ioBufferCompanion, UnflowCoreKtor_ioBuffer, UnflowCoreKtor_ioChunkBuffer, UnflowCoreKtor_ioChunkBufferCompanion, UnflowCoreKotlinCharArray, UnflowCoreKtor_ioIoBufferCompanion, UnflowCoreKtor_ioAbstractInputCompanion, UnflowCoreKtor_ioAbstractInput, UnflowCoreKtor_ioByteReadPacketBaseCompanion, UnflowCoreKtor_ioByteReadPacketBase, UnflowCoreKtor_ioByteReadPacketPlatformBase, UnflowCoreKtor_ioByteReadPacketCompanion, UnflowCoreKtor_ioByteOrderCompanion, UnflowCoreKotlinKTypeProjection, UnflowCoreKtor_httpHeaderValueParam, UnflowCoreKtor_httpHeaderValueWithParametersCompanion, UnflowCoreKtor_httpHeaderValueWithParameters, UnflowCoreKtor_httpContentTypeCompanion, UnflowCoreKotlinx_coroutines_coreAtomicDesc, UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, UnflowCoreKtor_utilsWeekDayCompanion, UnflowCoreKtor_utilsMonthCompanion, UnflowCoreKotlinCharIterator, UnflowCoreKotlinKVariance, UnflowCoreKotlinKTypeProjectionCompanion, UnflowCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, UnflowCoreKotlinx_coroutines_coreOpDescriptor, UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode, UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol UnflowCoreKotlinComparable, UnflowCoreAnalyticsListener, UnflowCoreAnalytics, UnflowCoreAnymoRepository, UnflowCoreKotlinx_coroutines_coreFlow, UnflowCoreAlignment, UnflowCoreKotlinx_coroutines_coreFlowCollector, UnflowCoreKtor_ioCloseable, UnflowCoreAppStyleQueries, UnflowCoreScreenQueries, UnflowCoreRuntimeTransactionWithoutReturn, UnflowCoreRuntimeTransactionWithReturn, UnflowCoreRuntimeTransacter, UnflowCoreAnymoDatabase, UnflowCoreRuntimeSqlDriver, UnflowCoreRuntimeSqlDriverSchema, UnflowCoreKotlinIterator, UnflowCoreRuntimeTransactionCallbacks, UnflowCoreRuntimeSqlPreparedStatement, UnflowCoreRuntimeSqlCursor, UnflowCoreRuntimeCloseable, UnflowCoreRuntimeQueryListener, UnflowCoreKotlinCoroutineContext, UnflowCoreKotlinx_coroutines_coreCoroutineScope, UnflowCoreKtor_client_coreHttpClientEngine, UnflowCoreKtor_client_coreHttpClientEngineCapability, UnflowCoreKtor_utilsAttributes, UnflowCoreKotlinx_serialization_coreDeserializationStrategy, UnflowCoreKotlinx_serialization_coreSerializationStrategy, UnflowCoreKotlinx_serialization_coreSerialFormat, UnflowCoreKotlinx_serialization_coreStringFormat, UnflowCoreKtor_httpHttpMessageBuilder, UnflowCoreKotlinx_coroutines_coreJob, UnflowCoreKotlinCoroutineContextElement, UnflowCoreKotlinCoroutineContextKey, UnflowCoreKtor_client_coreHttpClientFeature, UnflowCoreKtor_ioByteReadChannel, UnflowCoreKtor_utilsTypeInfo, UnflowCoreKtor_client_coreHttpRequest, UnflowCoreKotlinContinuation, UnflowCoreKotlinContinuationInterceptor, UnflowCoreKotlinx_coroutines_coreRunnable, UnflowCoreKotlinSuspendFunction2, UnflowCoreKotlinx_serialization_coreDecoder, UnflowCoreKotlinx_serialization_coreSerialDescriptor, UnflowCoreKotlinx_serialization_coreEncoder, UnflowCoreKotlinx_serialization_coreSerializersModuleCollector, UnflowCoreKotlinx_serialization_coreKSerializer, UnflowCoreKotlinKClass, UnflowCoreKtor_utilsStringValues, UnflowCoreKotlinMapEntry, UnflowCoreKtor_httpHeaders, UnflowCoreKotlinx_coroutines_coreChildHandle, UnflowCoreKotlinx_coroutines_coreChildJob, UnflowCoreKotlinx_coroutines_coreDisposableHandle, UnflowCoreKotlinSequence, UnflowCoreKotlinx_coroutines_coreSelectClause0, UnflowCoreKtor_ioReadSession, UnflowCoreKotlinSuspendFunction1, UnflowCoreKotlinAppendable, UnflowCoreKotlinKType, UnflowCoreKtor_httpHttpMessage, UnflowCoreKotlinFunction, UnflowCoreKotlinx_serialization_coreCompositeDecoder, UnflowCoreKotlinAnnotation, UnflowCoreKotlinx_serialization_coreCompositeEncoder, UnflowCoreKotlinKDeclarationContainer, UnflowCoreKotlinKAnnotatedElement, UnflowCoreKotlinKClassifier, UnflowCoreKtor_httpParameters, UnflowCoreKotlinx_coroutines_coreParentJob, UnflowCoreKotlinx_coroutines_coreSelectInstance, UnflowCoreKotlinSuspendFunction0, UnflowCoreKtor_ioObjectPool, UnflowCoreKtor_ioInput, UnflowCoreKtor_ioOutput;

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
@interface UnflowCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface UnflowCoreBase (UnflowCoreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface UnflowCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UnflowCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorUnflowCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface UnflowCoreNumber : NSNumber
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
@interface UnflowCoreByte : UnflowCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface UnflowCoreUByte : UnflowCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface UnflowCoreShort : UnflowCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface UnflowCoreUShort : UnflowCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface UnflowCoreInt : UnflowCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface UnflowCoreUInt : UnflowCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface UnflowCoreLong : UnflowCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface UnflowCoreULong : UnflowCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface UnflowCoreFloat : UnflowCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface UnflowCoreDouble : UnflowCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface UnflowCoreBoolean : UnflowCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("AnalyticsListener")))
@protocol UnflowCoreAnalyticsListener
@required
- (void)onEventEvent:(UnflowCoreUnflowEvent *)event __attribute__((swift_name("onEvent(event:)")));
@end;

__attribute__((swift_name("UnflowEvent")))
@interface UnflowCoreUnflowEvent : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowCoreUnflowEventCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, id> *)allAttributes __attribute__((swift_name("allAttributes()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.Action")))
@interface UnflowCoreUnflowEventAction : UnflowCoreUnflowEvent
- (instancetype)initWithName:(NSString *)name interaction:(UnflowCoreUnflowEventActionInteraction *)interaction attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("init(name:interaction:attributes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, id> *)allAttributes __attribute__((swift_name("allAttributes()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowCoreUnflowEventActionInteraction *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreUnflowEventAction *)doCopyName:(NSString *)name interaction:(UnflowCoreUnflowEventActionInteraction *)interaction attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("doCopy(name:interaction:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowCoreUnflowEventActionInteraction *interaction __attribute__((swift_name("interaction")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol UnflowCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface UnflowCoreKotlinEnum<E> : UnflowCoreBase <UnflowCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.ActionInteraction")))
@interface UnflowCoreUnflowEventActionInteraction : UnflowCoreKotlinEnum<UnflowCoreUnflowEventActionInteraction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UnflowCoreUnflowEventActionInteraction *tap __attribute__((swift_name("tap")));
@property (class, readonly) UnflowCoreUnflowEventActionInteraction *swipe __attribute__((swift_name("swipe")));
+ (UnflowCoreKotlinArray<UnflowCoreUnflowEventActionInteraction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.Companion")))
@interface UnflowCoreUnflowEventCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreUnflowEventCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreUnflowEventScreen *)screenName:(NSString *)name screenId:(int64_t)screenId parameters:(UnflowCoreKotlinArray<UnflowCoreKotlinPair<NSString *, id> *> *)parameters __attribute__((swift_name("screen(name:screenId:parameters:)")));
- (UnflowCoreUnflowEventAction *)tapName:(NSString *)name parameters:(UnflowCoreKotlinArray<UnflowCoreKotlinPair<NSString *, id> *> *)parameters __attribute__((swift_name("tap(name:parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.Screen")))
@interface UnflowCoreUnflowEventScreen : UnflowCoreUnflowEvent
- (instancetype)initWithName:(NSString *)name screenId:(int64_t)screenId attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("init(name:screenId:attributes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, id> *)allAttributes __attribute__((swift_name("allAttributes()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreUnflowEventScreen *)doCopyName:(NSString *)name screenId:(int64_t)screenId attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("doCopy(name:screenId:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int64_t screenId __attribute__((swift_name("screenId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoSdk")))
@interface UnflowCoreAnymoSdk : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)anymoSdk __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreAnymoSdk *shared __attribute__((swift_name("shared")));
- (void)setupConfig:(UnflowCoreAnymoSdkConfig *)config databaseDriverFactory:(UnflowCoreDatabaseDriverFactory *)databaseDriverFactory analyticsListener:(id<UnflowCoreAnalyticsListener> _Nullable)analyticsListener __attribute__((swift_name("setup(config:databaseDriverFactory:analyticsListener:)")));
@property (readonly) NSString *SUBSCRIPTION_ID_DEFAULT __attribute__((swift_name("SUBSCRIPTION_ID_DEFAULT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoSdk.Config")))
@interface UnflowCoreAnymoSdkConfig : UnflowCoreBase
- (instancetype)initWithApiKey:(NSString *)apiKey enableLogging:(BOOL)enableLogging __attribute__((swift_name("init(apiKey:enableLogging:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreAnymoSdkConfig *)doCopyApiKey:(NSString *)apiKey enableLogging:(BOOL)enableLogging __attribute__((swift_name("doCopy(apiKey:enableLogging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) BOOL enableLogging __attribute__((swift_name("enableLogging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoComponent")))
@interface UnflowCoreAnymoComponent : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)anymoComponent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreAnymoComponent *shared __attribute__((swift_name("shared")));
@property (readonly) id<UnflowCoreAnalytics> analytics __attribute__((swift_name("analytics")));
@property (readonly) id<UnflowCoreAnymoRepository> anymoRepository __attribute__((swift_name("anymoRepository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentModule")))
@interface UnflowCoreContentModule : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contentModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreContentModule *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("AnymoLocalDataSource")))
@protocol UnflowCoreAnymoLocalDataSource
@required
- (id<UnflowCoreKotlinx_coroutines_coreFlow>)allOpenersSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("allOpeners(subscriptionId:)")));
- (id<UnflowCoreKotlinx_coroutines_coreFlow>)getAppStyle __attribute__((swift_name("getAppStyle()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceAppStyleAppStyle:(UnflowCoreAppStyle *)appStyle completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceAppStyle(appStyle:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceScreensScreens:(NSArray<UnflowCoreScreen *> *)screens completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceScreens(screens:completionHandler:)")));
- (id<UnflowCoreKotlinx_coroutines_coreFlow>)screenId:(int64_t)id __attribute__((swift_name("screen(id:)")));
@end;

__attribute__((swift_name("AnymoRepository")))
@protocol UnflowCoreAnymoRepository
@required
- (UnflowCoreCommonFlow<UnflowCoreAppStyle *> *)appStyle __attribute__((swift_name("appStyle()")));
- (UnflowCoreCommonFlow<NSArray<UnflowCoreOpener *> *> *)openersSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("openers(subscriptionId:)")));
- (UnflowCoreCommonFlow<UnflowCoreScreen *> *)screenId:(int64_t)id __attribute__((swift_name("screen(id:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)syncWithCompletionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sync(completionHandler:)")));
@end;

__attribute__((swift_name("Alignment")))
@protocol UnflowCoreAlignment
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Block")))
@interface UnflowCoreBlock : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Button")))
@interface UnflowCoreBlockButton : UnflowCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(UnflowCoreLink * _Nullable)link style:(UnflowCoreBlockButtonStyle *)style __attribute__((swift_name("init(id:position:text:link:style:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreLink * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowCoreBlockButtonStyle *)component5 __attribute__((swift_name("component5()")));
- (UnflowCoreBlockButton *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(UnflowCoreLink * _Nullable)link style:(UnflowCoreBlockButtonStyle *)style __attribute__((swift_name("doCopy(id:position:text:link:style:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowCoreLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowCoreBlockButtonStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.ButtonStyle")))
@interface UnflowCoreBlockButtonStyle : UnflowCoreKotlinEnum<UnflowCoreBlockButtonStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreBlockButtonStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreBlockButtonStyle *primary __attribute__((swift_name("primary")));
@property (class, readonly) UnflowCoreBlockButtonStyle *secondary __attribute__((swift_name("secondary")));
+ (UnflowCoreKotlinArray<UnflowCoreBlockButtonStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.ButtonStyleCompanion")))
@interface UnflowCoreBlockButtonStyleCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreBlockButtonStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Image")))
@interface UnflowCoreBlockImage : UnflowCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position uri:(NSString *)uri __attribute__((swift_name("init(id:position:uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreBlockImage *)doCopyId:(int64_t)id position:(int32_t)position uri:(NSString *)uri __attribute__((swift_name("doCopy(id:position:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Spacer")))
@interface UnflowCoreBlockSpacer : UnflowCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position height:(int32_t)height __attribute__((swift_name("init(id:position:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreBlockSpacer *)doCopyId:(int64_t)id position:(int32_t)position height:(int32_t)height __attribute__((swift_name("doCopy(id:position:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Text")))
@interface UnflowCoreBlockText : UnflowCoreBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text color:(NSString * _Nullable)color style:(UnflowCoreBlockTextStyle * _Nullable)style __attribute__((swift_name("init(id:position:text:color:style:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowCoreBlockTextStyle * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowCoreBlockText *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text color:(NSString * _Nullable)color style:(UnflowCoreBlockTextStyle * _Nullable)style __attribute__((swift_name("doCopy(id:position:text:color:style:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowCoreBlockTextStyle * _Nullable style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.TextStyle")))
@interface UnflowCoreBlockTextStyle : UnflowCoreKotlinEnum<UnflowCoreBlockTextStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreBlockTextStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreBlockTextStyle *title __attribute__((swift_name("title")));
@property (class, readonly) UnflowCoreBlockTextStyle *subtitle __attribute__((swift_name("subtitle")));
+ (UnflowCoreKotlinArray<UnflowCoreBlockTextStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.TextStyleCompanion")))
@interface UnflowCoreBlockTextStyleCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreBlockTextStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockType")))
@interface UnflowCoreBlockType : UnflowCoreKotlinEnum<UnflowCoreBlockType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreBlockTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreBlockType *image __attribute__((swift_name("image")));
@property (class, readonly) UnflowCoreBlockType *text __attribute__((swift_name("text")));
@property (class, readonly) UnflowCoreBlockType *button __attribute__((swift_name("button")));
@property (class, readonly) UnflowCoreBlockType *spacer __attribute__((swift_name("spacer")));
+ (UnflowCoreKotlinArray<UnflowCoreBlockType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockType.Companion")))
@interface UnflowCoreBlockTypeCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreBlockTypeCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreBlockType * _Nullable)fromValueValue:(NSString *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalAlignment")))
@interface UnflowCoreHorizontalAlignment : UnflowCoreKotlinEnum<UnflowCoreHorizontalAlignment *> <UnflowCoreAlignment>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreHorizontalAlignmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreHorizontalAlignment *left __attribute__((swift_name("left")));
@property (class, readonly) UnflowCoreHorizontalAlignment *right __attribute__((swift_name("right")));
@property (class, readonly) UnflowCoreHorizontalAlignment *center __attribute__((swift_name("center")));
+ (UnflowCoreKotlinArray<UnflowCoreHorizontalAlignment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalAlignment.Companion")))
@interface UnflowCoreHorizontalAlignmentCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreHorizontalAlignmentCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Opener")))
@interface UnflowCoreOpener : UnflowCoreBase
- (instancetype)initWithScreenId:(int64_t)screenId title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(screenId:title:subtitle:imageUrl:backgroundColor:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowCoreOpener *)doCopyScreenId:(int64_t)screenId title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("doCopy(screenId:title:subtitle:imageUrl:backgroundColor:)")));
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
@interface UnflowCorePage : UnflowCoreBase
- (instancetype)initWithId:(int64_t)id slots:(NSArray<UnflowCoreSlot *> *)slots verticalAlignment:(UnflowCoreVerticalAlignment * _Nullable)verticalAlignment horizontalAlignment:(UnflowCoreHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl __attribute__((swift_name("init(id:slots:verticalAlignment:horizontalAlignment:backgroundImageUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<UnflowCoreSlot *> *)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreVerticalAlignment * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreHorizontalAlignment * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowCorePage *)doCopyId:(int64_t)id slots:(NSArray<UnflowCoreSlot *> *)slots verticalAlignment:(UnflowCoreVerticalAlignment * _Nullable)verticalAlignment horizontalAlignment:(UnflowCoreHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl __attribute__((swift_name("doCopy(id:slots:verticalAlignment:horizontalAlignment:backgroundImageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundImageUrl __attribute__((swift_name("backgroundImageUrl")));
@property (readonly) UnflowCoreHorizontalAlignment * _Nullable horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<UnflowCoreSlot *> *slots __attribute__((swift_name("slots")));
@property (readonly) UnflowCoreVerticalAlignment * _Nullable verticalAlignment __attribute__((swift_name("verticalAlignment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen")))
@interface UnflowCoreScreen : UnflowCoreBase
- (instancetype)initWithId:(int64_t)id subscriptionId:(NSString *)subscriptionId contentType:(UnflowCoreScreenContentType * _Nullable)contentType opener:(UnflowCoreOpener *)opener pages:(NSArray<UnflowCorePage *> *)pages __attribute__((swift_name("init(id:subscriptionId:contentType:opener:pages:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreScreenContentType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreOpener *)component4 __attribute__((swift_name("component4()")));
- (NSArray<UnflowCorePage *> *)component5 __attribute__((swift_name("component5()")));
- (UnflowCoreScreen *)doCopyId:(int64_t)id subscriptionId:(NSString *)subscriptionId contentType:(UnflowCoreScreenContentType * _Nullable)contentType opener:(UnflowCoreOpener *)opener pages:(NSArray<UnflowCorePage *> *)pages __attribute__((swift_name("doCopy(id:subscriptionId:contentType:opener:pages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreScreenContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowCoreOpener *opener __attribute__((swift_name("opener")));
@property (readonly) NSArray<UnflowCorePage *> *pages __attribute__((swift_name("pages")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.ContentType")))
@interface UnflowCoreScreenContentType : UnflowCoreKotlinEnum<UnflowCoreScreenContentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreScreenContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreScreenContentType *carousel __attribute__((swift_name("carousel")));
@property (class, readonly) UnflowCoreScreenContentType *story __attribute__((swift_name("story")));
+ (UnflowCoreKotlinArray<UnflowCoreScreenContentType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *apiValue __attribute__((swift_name("apiValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.ContentTypeCompanion")))
@interface UnflowCoreScreenContentTypeCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreScreenContentTypeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot")))
@interface UnflowCoreSlot : UnflowCoreBase
- (instancetype)initWithId:(int64_t)id position:(int32_t)position blocks:(NSArray<UnflowCoreBlock *> *)blocks __attribute__((swift_name("init(id:position:blocks:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowCoreBlock *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreSlot *)doCopyId:(int64_t)id position:(int32_t)position blocks:(NSArray<UnflowCoreBlock *> *)blocks __attribute__((swift_name("doCopy(id:position:blocks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<UnflowCoreBlock *> *blocks __attribute__((swift_name("blocks")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerticalAlignment")))
@interface UnflowCoreVerticalAlignment : UnflowCoreKotlinEnum<UnflowCoreVerticalAlignment *> <UnflowCoreAlignment>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreVerticalAlignmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreVerticalAlignment *top __attribute__((swift_name("top")));
@property (class, readonly) UnflowCoreVerticalAlignment *bottom __attribute__((swift_name("bottom")));
@property (class, readonly) UnflowCoreVerticalAlignment *center __attribute__((swift_name("center")));
+ (UnflowCoreKotlinArray<UnflowCoreVerticalAlignment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerticalAlignment.Companion")))
@interface UnflowCoreVerticalAlignmentCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreVerticalAlignmentCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle")))
@interface UnflowCoreAppStyle : UnflowCoreBase
- (instancetype)initWithPrimaryColor:(NSString *)primaryColor __attribute__((swift_name("init(primaryColor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowCoreAppStyle *)doCopyPrimaryColor:(NSString *)primaryColor __attribute__((swift_name("doCopy(primaryColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *primaryColor __attribute__((swift_name("primaryColor")));
@end;

__attribute__((swift_name("Analytics")))
@protocol UnflowCoreAnalytics
@required
- (void)trackEventEvent:(UnflowCoreUnflowEvent *)event __attribute__((swift_name("trackEvent(event:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsModule")))
@interface UnflowCoreAnalyticsModule : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)analyticsModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreAnalyticsModule *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowAnalytics")))
@interface UnflowCoreUnflowAnalytics : UnflowCoreBase <UnflowCoreAnalytics>
- (instancetype)initWithAnalyticsListener:(id<UnflowCoreAnalyticsListener> _Nullable)analyticsListener __attribute__((swift_name("init(analyticsListener:)"))) __attribute__((objc_designated_initializer));
- (void)trackEventEvent:(UnflowCoreUnflowEvent *)event __attribute__((swift_name("trackEvent(event:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol UnflowCoreKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<UnflowCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFlow")))
@interface UnflowCoreCommonFlow<T> : UnflowCoreBase <UnflowCoreKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<UnflowCoreKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<UnflowCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<UnflowCoreKtor_ioCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinksModule")))
@interface UnflowCoreLinksModule : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linksModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreLinksModule *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Link")))
@interface UnflowCoreLink : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("Link.Action")))
@interface UnflowCoreLinkAction : UnflowCoreLink
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionClose")))
@interface UnflowCoreLinkActionClose : UnflowCoreLinkAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)close __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreLinkActionClose *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionNext")))
@interface UnflowCoreLinkActionNext : UnflowCoreLinkAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)next __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreLinkActionNext *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("Link.Navigable")))
@interface UnflowCoreLinkNavigable : UnflowCoreLink
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.NavigableHttp")))
@interface UnflowCoreLinkNavigableHttp : UnflowCoreLinkNavigable
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowCoreLinkNavigableHttp *)doCopyUri:(NSString *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.NavigableOther")))
@interface UnflowCoreLinkNavigableOther : UnflowCoreLink
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowCoreLinkNavigableOther *)doCopyUri:(NSString *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol UnflowCoreRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<UnflowCoreRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<UnflowCoreRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AnymoDatabase")))
@protocol UnflowCoreAnymoDatabase <UnflowCoreRuntimeTransacter>
@required
@property (readonly) id<UnflowCoreAppStyleQueries> appStyleQueries __attribute__((swift_name("appStyleQueries")));
@property (readonly) id<UnflowCoreScreenQueries> screenQueries __attribute__((swift_name("screenQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnymoDatabaseCompanion")))
@interface UnflowCoreAnymoDatabaseCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreAnymoDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowCoreAnymoDatabase>)invokeDriver:(id<UnflowCoreRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<UnflowCoreRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle_")))
@interface UnflowCoreAppStyle_ : UnflowCoreBase
- (instancetype)initWithPrimary_color:(NSString *)primary_color __attribute__((swift_name("init(primary_color:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowCoreAppStyle_ *)doCopyPrimary_color:(NSString *)primary_color __attribute__((swift_name("doCopy(primary_color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *primary_color __attribute__((swift_name("primary_color")));
@end;

__attribute__((swift_name("AppStyleQueries")))
@protocol UnflowCoreAppStyleQueries <UnflowCoreRuntimeTransacter>
@required
- (void)deleteAppStyle __attribute__((swift_name("deleteAppStyle()")));
- (void)insertAppStylePrimary_color:(NSString *)primary_color __attribute__((swift_name("insertAppStyle(primary_color:)")));
- (UnflowCoreRuntimeQuery<NSString *> *)selectAll __attribute__((swift_name("selectAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block_")))
@interface UnflowCoreBlock_ : UnflowCoreBase
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
- (UnflowCoreBlock_ *)doCopyBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value:(NSString *)value text_style:(NSString * _Nullable)text_style text_color:(NSString * _Nullable)text_color button_style:(NSString * _Nullable)button_style uri:(NSString * _Nullable)uri __attribute__((swift_name("doCopy(block_id:slot_id:position:block_type:value:text_style:text_color:button_style:uri:)")));
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
@interface UnflowCoreDatabaseDriverFactory : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<UnflowCoreRuntimeSqlDriver>)createDriverMigrationCallback:(UnflowCoreRuntimeAfterVersionWithDriver *)migrationCallback __attribute__((swift_name("createDriver(migrationCallback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DbModule")))
@interface UnflowCoreDbModule : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dbModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreDbModule *shared __attribute__((swift_name("shared")));
- (void)buildDatabaseDriverFactory:(UnflowCoreDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("build(databaseDriverFactory:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Opener_")))
@interface UnflowCoreOpener_ : UnflowCoreBase
- (instancetype)initWithScreen_id:(int64_t)screen_id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url background_color:(NSString * _Nullable)background_color __attribute__((swift_name("init(screen_id:title:subtitle:image_url:background_color:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowCoreOpener_ *)doCopyScreen_id:(int64_t)screen_id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url background_color:(NSString * _Nullable)background_color __attribute__((swift_name("doCopy(screen_id:title:subtitle:image_url:background_color:)")));
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
@interface UnflowCorePage_ : UnflowCoreBase
- (instancetype)initWithPage_id:(int64_t)page_id screen_id:(int64_t)screen_id vertical_alignment:(NSString * _Nullable)vertical_alignment horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("init(page_id:screen_id:vertical_alignment:horizontal_alignment:background_image_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowCorePage_ *)doCopyPage_id:(int64_t)page_id screen_id:(int64_t)screen_id vertical_alignment:(NSString * _Nullable)vertical_alignment horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("doCopy(page_id:screen_id:vertical_alignment:horizontal_alignment:background_image_url:)")));
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
@interface UnflowCoreScreen_ : UnflowCoreBase
- (instancetype)initWithScreen_id:(int64_t)screen_id subscription_id:(NSString *)subscription_id content_type:(NSString * _Nullable)content_type __attribute__((swift_name("init(screen_id:subscription_id:content_type:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreScreen_ *)doCopyScreen_id:(int64_t)screen_id subscription_id:(NSString *)subscription_id content_type:(NSString * _Nullable)content_type __attribute__((swift_name("doCopy(screen_id:subscription_id:content_type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content_type __attribute__((swift_name("content_type")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString *subscription_id __attribute__((swift_name("subscription_id")));
@end;

__attribute__((swift_name("ScreenQueries")))
@protocol UnflowCoreScreenQueries <UnflowCoreRuntimeTransacter>
@required
- (void)deleteAllBlocks __attribute__((swift_name("deleteAllBlocks()")));
- (void)deleteAllOpeners __attribute__((swift_name("deleteAllOpeners()")));
- (void)deleteAllPages __attribute__((swift_name("deleteAllPages()")));
- (void)deleteAllScreens __attribute__((swift_name("deleteAllScreens()")));
- (void)insertBlockBlock:(UnflowCoreBlock_ *)block __attribute__((swift_name("insertBlock(block:)")));
- (void)insertOpenerOpener:(UnflowCoreOpener_ *)opener __attribute__((swift_name("insertOpener(opener:)")));
- (void)insertPagePage:(UnflowCorePage_ *)page __attribute__((swift_name("insertPage(page:)")));
- (void)insertScreenScreen:(UnflowCoreScreen_ *)screen __attribute__((swift_name("insertScreen(screen:)")));
- (void)insertSlotSlot:(UnflowCoreSlot_ *)slot __attribute__((swift_name("insertSlot(slot:)")));
- (UnflowCoreRuntimeQuery<UnflowCoreOpener_ *> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString *)subscription_id __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:)")));
- (UnflowCoreRuntimeQuery<id> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString *)subscription_id mapper:(id (^)(UnflowCoreLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:mapper:)")));
- (UnflowCoreRuntimeQuery<UnflowCoreBlock_ *> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id __attribute__((swift_name("selectBlockForSlotId(slot_id:)")));
- (UnflowCoreRuntimeQuery<id> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id mapper:(id (^)(UnflowCoreLong *, UnflowCoreLong *, UnflowCoreInt *, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectBlockForSlotId(slot_id:mapper:)")));
- (UnflowCoreRuntimeQuery<UnflowCoreOpener_ *> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectOpenerForScreenId(screen_id:)")));
- (UnflowCoreRuntimeQuery<id> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowCoreLong *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectOpenerForScreenId(screen_id:mapper:)")));
- (UnflowCoreRuntimeQuery<UnflowCorePage_ *> *)selectPageForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectPageForScreenId(screen_id:)")));
- (UnflowCoreRuntimeQuery<id> *)selectPageForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowCoreLong *, UnflowCoreLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectPageForScreenId(screen_id:mapper:)")));
- (UnflowCoreRuntimeQuery<UnflowCoreScreen_ *> *)selectScreenForIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectScreenForId(screen_id:)")));
- (UnflowCoreRuntimeQuery<id> *)selectScreenForIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowCoreLong *, NSString *, NSString * _Nullable))mapper __attribute__((swift_name("selectScreenForId(screen_id:mapper:)")));
- (UnflowCoreRuntimeQuery<UnflowCoreSlot_ *> *)selectSlotForPageIdPage_id:(int64_t)page_id __attribute__((swift_name("selectSlotForPageId(page_id:)")));
- (UnflowCoreRuntimeQuery<id> *)selectSlotForPageIdPage_id:(int64_t)page_id mapper:(id (^)(UnflowCoreLong *, UnflowCoreLong *, UnflowCoreInt *))mapper __attribute__((swift_name("selectSlotForPageId(page_id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot_")))
@interface UnflowCoreSlot_ : UnflowCoreBase
- (instancetype)initWithSlot_id:(int64_t)slot_id page_id:(int64_t)page_id position:(int32_t)position __attribute__((swift_name("init(slot_id:page_id:position:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreSlot_ *)doCopySlot_id:(int64_t)slot_id page_id:(int64_t)page_id position:(int32_t)position __attribute__((swift_name("doCopy(slot_id:page_id:position:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t page_id __attribute__((swift_name("page_id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int64_t slot_id __attribute__((swift_name("slot_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiModule")))
@interface UnflowCoreApiModule : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)apiModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreApiModule *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_client_coreHttpClient *)provideHttpClientJson:(UnflowCoreKotlinx_serialization_jsonJson *)json __attribute__((swift_name("provideHttpClient(json:)")));
- (UnflowCoreKotlinx_serialization_jsonJson *)provideJson __attribute__((swift_name("provideJson()")));
- (void)fromEndpoint:(UnflowCoreKtor_client_coreHttpRequestBuilder *)receiver path:(NSString *)path __attribute__((swift_name("fromEndpoint(_:path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowKt")))
@interface UnflowCoreFlowKt : UnflowCoreBase
+ (UnflowCoreCommonFlow<id> *)asCommonFlow:(id<UnflowCoreKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("asCommonFlow(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface UnflowCoreKotlinEnumCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface UnflowCoreKotlinArray<T> : UnflowCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(UnflowCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<UnflowCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface UnflowCoreKotlinPair<__covariant A, __covariant B> : UnflowCoreBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface UnflowCoreKotlinThrowable : UnflowCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (UnflowCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface UnflowCoreKotlinException : UnflowCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface UnflowCoreKotlinRuntimeException : UnflowCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface UnflowCoreKotlinIllegalStateException : UnflowCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface UnflowCoreKotlinCancellationException : UnflowCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface UnflowCoreKotlinUnit : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol UnflowCoreKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol UnflowCoreKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol UnflowCoreRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol UnflowCoreRuntimeTransactionWithoutReturn <UnflowCoreRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<UnflowCoreRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol UnflowCoreRuntimeTransactionWithReturn <UnflowCoreRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<UnflowCoreRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol UnflowCoreRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol UnflowCoreRuntimeSqlDriver <UnflowCoreRuntimeCloseable>
@required
- (UnflowCoreRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(UnflowCoreInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<UnflowCoreRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<UnflowCoreRuntimeSqlCursor>)executeQueryIdentifier:(UnflowCoreInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<UnflowCoreRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (UnflowCoreRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol UnflowCoreRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<UnflowCoreRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<UnflowCoreRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface UnflowCoreRuntimeQuery<__covariant RowType> : UnflowCoreBase
- (instancetype)initWithQueries:(NSMutableArray<UnflowCoreRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<UnflowCoreRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<UnflowCoreRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<UnflowCoreRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<UnflowCoreRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<UnflowCoreRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersionWithDriver")))
@interface UnflowCoreRuntimeAfterVersionWithDriver : UnflowCoreBase
- (instancetype)initWithAfterVersion:(int32_t)afterVersion block:(void (^)(id<UnflowCoreRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol UnflowCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<UnflowCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface UnflowCoreKtor_client_coreHttpClient : UnflowCoreBase <UnflowCoreKotlinx_coroutines_coreCoroutineScope, UnflowCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<UnflowCoreKtor_client_coreHttpClientEngine>)engine userConfig:(UnflowCoreKtor_client_coreHttpClientConfig<UnflowCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (UnflowCoreKtor_client_coreHttpClient *)configBlock:(void (^)(UnflowCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(UnflowCoreKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(UnflowCoreKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<UnflowCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<UnflowCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<UnflowCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) UnflowCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) UnflowCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) UnflowCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) UnflowCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) UnflowCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol UnflowCoreKotlinx_serialization_coreSerialFormat
@required
@property (readonly) UnflowCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol UnflowCoreKotlinx_serialization_coreStringFormat <UnflowCoreKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface UnflowCoreKotlinx_serialization_jsonJson : UnflowCoreBase <UnflowCoreKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(UnflowCoreKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(UnflowCoreKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(UnflowCoreKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (UnflowCoreKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (UnflowCoreKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) UnflowCoreKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) UnflowCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol UnflowCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) UnflowCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface UnflowCoreKtor_client_coreHttpRequestBuilder : UnflowCoreBase <UnflowCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (UnflowCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<UnflowCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<UnflowCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<UnflowCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (UnflowCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(UnflowCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (UnflowCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(UnflowCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(UnflowCoreKtor_httpURLBuilder *, UnflowCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<UnflowCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<UnflowCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) UnflowCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property UnflowCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) UnflowCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol UnflowCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface UnflowCoreRuntimeTransacterTransaction : UnflowCoreBase <UnflowCoreRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) UnflowCoreRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol UnflowCoreRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(UnflowCoreKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(UnflowCoreDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(UnflowCoreLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol UnflowCoreRuntimeSqlCursor <UnflowCoreRuntimeCloseable>
@required
- (UnflowCoreKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (UnflowCoreDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (UnflowCoreLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol UnflowCoreRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol UnflowCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<UnflowCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<UnflowCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<UnflowCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<UnflowCoreKotlinCoroutineContext>)minusKeyKey:(id<UnflowCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<UnflowCoreKotlinCoroutineContext>)plusContext:(id<UnflowCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol UnflowCoreKtor_client_coreHttpClientEngine <UnflowCoreKotlinx_coroutines_coreCoroutineScope, UnflowCoreKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(UnflowCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(UnflowCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(UnflowCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) UnflowCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<UnflowCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface UnflowCoreKtor_client_coreHttpClientEngineConfig : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property UnflowCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) UnflowCoreKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface UnflowCoreKtor_client_coreHttpClientConfig<T> : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UnflowCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(UnflowCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<UnflowCoreKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(UnflowCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(UnflowCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface UnflowCoreKtor_client_coreHttpClientCall : UnflowCoreBase <UnflowCoreKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) UnflowCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<UnflowCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(UnflowCoreKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<UnflowCoreKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<UnflowCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowCoreKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<UnflowCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<UnflowCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) UnflowCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol UnflowCoreKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol UnflowCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<UnflowCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol UnflowCoreKotlinCoroutineContextElement <UnflowCoreKotlinCoroutineContext>
@required
@property (readonly) id<UnflowCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface UnflowCoreKotlinAbstractCoroutineContextElement : UnflowCoreBase <UnflowCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<UnflowCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<UnflowCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol UnflowCoreKotlinContinuationInterceptor <UnflowCoreKotlinCoroutineContextElement>
@required
- (id<UnflowCoreKotlinContinuation>)interceptContinuationContinuation:(id<UnflowCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<UnflowCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher : UnflowCoreKotlinAbstractCoroutineContextElement <UnflowCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<UnflowCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<UnflowCoreKotlinCoroutineContext>)context block:(id<UnflowCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<UnflowCoreKotlinCoroutineContext>)context block:(id<UnflowCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<UnflowCoreKotlinContinuation>)interceptContinuationContinuation:(id<UnflowCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<UnflowCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<UnflowCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface UnflowCoreKtor_utilsPipeline<TSubject, TContext> : UnflowCoreBase
- (instancetype)initWithPhase:(UnflowCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(UnflowCoreKotlinArray<UnflowCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(UnflowCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(UnflowCoreKtor_utilsPipelinePhase *)reference phase:(UnflowCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(UnflowCoreKtor_utilsPipelinePhase *)reference phase:(UnflowCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(UnflowCoreKtor_utilsPipelinePhase *)phase block:(id<UnflowCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(UnflowCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<UnflowCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<UnflowCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface UnflowCoreKtor_client_coreHttpReceivePipeline : UnflowCoreKtor_utilsPipeline<UnflowCoreKtor_client_coreHttpResponse *, UnflowCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowCoreKotlinArray<UnflowCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface UnflowCoreKtor_client_coreHttpRequestPipeline : UnflowCoreKtor_utilsPipeline<id, UnflowCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowCoreKotlinArray<UnflowCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface UnflowCoreKtor_client_coreHttpResponsePipeline : UnflowCoreKtor_utilsPipeline<UnflowCoreKtor_client_coreHttpResponseContainer *, UnflowCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowCoreKotlinArray<UnflowCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface UnflowCoreKtor_client_coreHttpSendPipeline : UnflowCoreKtor_utilsPipeline<id, UnflowCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowCoreKotlinArray<UnflowCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol UnflowCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<UnflowCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<UnflowCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol UnflowCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<UnflowCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<UnflowCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface UnflowCoreKotlinx_serialization_coreSerializersModule : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<UnflowCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<UnflowCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<UnflowCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<UnflowCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<UnflowCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UnflowCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UnflowCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface UnflowCoreKotlinx_serialization_jsonJsonConfiguration : UnflowCoreBase
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
@interface UnflowCoreKotlinx_serialization_jsonJsonDefault : UnflowCoreKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(UnflowCoreKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(UnflowCoreKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface UnflowCoreKotlinx_serialization_jsonJsonElement : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowCoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface UnflowCoreKtor_utilsStringValuesBuilder : UnflowCoreBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<UnflowCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<UnflowCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<UnflowCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<UnflowCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
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
@property (readonly) UnflowCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface UnflowCoreKtor_httpHeadersBuilder : UnflowCoreKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<UnflowCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface UnflowCoreKtor_client_coreHttpRequestBuilderCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface UnflowCoreKtor_client_coreHttpRequestData : UnflowCoreBase
- (instancetype)initWithUrl:(UnflowCoreKtor_httpUrl *)url method:(UnflowCoreKtor_httpHttpMethod *)method headers:(id<UnflowCoreKtor_httpHeaders>)headers body:(UnflowCoreKtor_httpOutgoingContent *)body executionContext:(id<UnflowCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<UnflowCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<UnflowCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<UnflowCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<UnflowCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) UnflowCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface UnflowCoreKtor_httpURLBuilder : UnflowCoreBase
- (instancetype)initWithProtocol:(UnflowCoreKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(UnflowCoreKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (UnflowCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (UnflowCoreKtor_httpURLBuilder *)pathComponents:(UnflowCoreKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (UnflowCoreKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) UnflowCoreKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property UnflowCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol UnflowCoreKotlinx_coroutines_coreJob <UnflowCoreKotlinCoroutineContextElement>
@required
- (id<UnflowCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<UnflowCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(UnflowCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (UnflowCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<UnflowCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(UnflowCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<UnflowCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(UnflowCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<UnflowCoreKotlinx_coroutines_coreJob>)plusOther_:(id<UnflowCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<UnflowCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<UnflowCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface UnflowCoreKtor_httpHttpMethod : UnflowCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface UnflowCoreKotlinByteArray : UnflowCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(UnflowCoreByte *(^)(UnflowCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (UnflowCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol UnflowCoreKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface UnflowCoreKtor_client_coreHttpResponseData : UnflowCoreBase
- (instancetype)initWithStatusCode:(UnflowCoreKtor_httpHttpStatusCode *)statusCode requestTime:(UnflowCoreKtor_utilsGMTDate *)requestTime headers:(id<UnflowCoreKtor_httpHeaders>)headers version:(UnflowCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<UnflowCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<UnflowCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<UnflowCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) UnflowCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) UnflowCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface UnflowCoreKtor_client_coreProxyConfig : UnflowCoreBase
- (instancetype)initWithUrl:(UnflowCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface UnflowCoreKotlinNothing : UnflowCoreBase
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol UnflowCoreKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(UnflowCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) UnflowCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface UnflowCoreKtor_client_coreHttpClientCallCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol UnflowCoreKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(UnflowCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(UnflowCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(UnflowCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(UnflowCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(UnflowCoreKtor_ioIoBuffer *)dst completionHandler:(void (^)(UnflowCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(UnflowCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(UnflowCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(UnflowCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(UnflowCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(UnflowCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(UnflowCoreByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(UnflowCoreDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(UnflowCoreFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(UnflowCoreKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(UnflowCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(UnflowCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(UnflowCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(UnflowCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(UnflowCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<UnflowCoreKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(UnflowCoreShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<UnflowCoreKotlinSuspendFunction1>)consumer completionHandler:(void (^)(UnflowCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<UnflowCoreKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(UnflowCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) UnflowCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property UnflowCoreKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol UnflowCoreKtor_utilsTypeInfo
@required
@property (readonly) id<UnflowCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<UnflowCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<UnflowCoreKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface UnflowCoreKtor_client_coreTypeInfo : UnflowCoreBase <UnflowCoreKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<UnflowCoreKotlinKClass>)type reifiedType:(id<UnflowCoreKotlinKType>)reifiedType kotlinType:(id<UnflowCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<UnflowCoreKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<UnflowCoreKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<UnflowCoreKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreKtor_client_coreTypeInfo *)doCopyType:(id<UnflowCoreKotlinKClass>)type reifiedType:(id<UnflowCoreKotlinKType>)reifiedType kotlinType:(id<UnflowCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<UnflowCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<UnflowCoreKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol UnflowCoreKtor_httpHttpMessage
@required
@property (readonly) id<UnflowCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol UnflowCoreKtor_client_coreHttpRequest <UnflowCoreKtor_httpHttpMessage, UnflowCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<UnflowCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) UnflowCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) UnflowCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface UnflowCoreKtor_client_coreHttpResponse : UnflowCoreBase <UnflowCoreKtor_httpHttpMessage, UnflowCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<UnflowCoreKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) UnflowCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) UnflowCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface UnflowCoreKtor_utilsAttributeKey<T> : UnflowCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol UnflowCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<UnflowCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface UnflowCoreKotlinAbstractCoroutineContextKey<B, E> : UnflowCoreBase <UnflowCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<UnflowCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<UnflowCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface UnflowCoreKotlinx_coroutines_coreCoroutineDispatcherKey : UnflowCoreKotlinAbstractCoroutineContextKey<id<UnflowCoreKotlinContinuationInterceptor>, UnflowCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<UnflowCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<UnflowCoreKotlinCoroutineContextElement> _Nullable (^)(id<UnflowCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol UnflowCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface UnflowCoreKtor_utilsPipelinePhase : UnflowCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol UnflowCoreKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol UnflowCoreKotlinSuspendFunction2 <UnflowCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface UnflowCoreKtor_client_coreHttpReceivePipelinePhases : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface UnflowCoreKtor_client_coreHttpRequestPipelinePhases : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface UnflowCoreKtor_client_coreHttpResponsePipelinePhases : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface UnflowCoreKtor_client_coreHttpResponseContainer : UnflowCoreBase
- (instancetype)initWithExpectedType:(id<UnflowCoreKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(UnflowCoreKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (UnflowCoreKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(UnflowCoreKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface UnflowCoreKtor_client_coreHttpSendPipelinePhases : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) UnflowCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol UnflowCoreKotlinx_serialization_coreDecoder
@required
- (id<UnflowCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<UnflowCoreKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (UnflowCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) UnflowCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol UnflowCoreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<UnflowCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<UnflowCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) UnflowCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol UnflowCoreKotlinx_serialization_coreEncoder
@required
- (id<UnflowCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<UnflowCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<UnflowCoreKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) UnflowCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol UnflowCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<UnflowCoreKotlinKClass>)kClass provider:(id<UnflowCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<UnflowCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<UnflowCoreKotlinKClass>)kClass serializer:(id<UnflowCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<UnflowCoreKotlinKClass>)baseClass actualClass:(id<UnflowCoreKotlinKClass>)actualClass actualSerializer:(id<UnflowCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<UnflowCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol UnflowCoreKotlinx_serialization_coreKSerializer <UnflowCoreKotlinx_serialization_coreSerializationStrategy, UnflowCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol UnflowCoreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol UnflowCoreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol UnflowCoreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol UnflowCoreKotlinKClass <UnflowCoreKotlinKDeclarationContainer, UnflowCoreKotlinKAnnotatedElement, UnflowCoreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface UnflowCoreKotlinx_serialization_jsonJsonElementCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol UnflowCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<UnflowCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol UnflowCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol UnflowCoreKtor_httpHeaders <UnflowCoreKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface UnflowCoreKtor_httpUrl : UnflowCoreBase
- (instancetype)initWithProtocol:(UnflowCoreKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<UnflowCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (UnflowCoreKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<UnflowCoreKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (UnflowCoreKtor_httpUrl *)doCopyProtocol:(UnflowCoreKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<UnflowCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<UnflowCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) UnflowCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface UnflowCoreKtor_httpOutgoingContent : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(UnflowCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) UnflowCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) UnflowCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<UnflowCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface UnflowCoreKtor_httpURLProtocol : UnflowCoreBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface UnflowCoreKtor_httpParametersBuilder : UnflowCoreKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(UnflowCoreKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<UnflowCoreKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property UnflowCoreKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface UnflowCoreKtor_httpURLBuilderCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol UnflowCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol UnflowCoreKotlinx_coroutines_coreChildHandle <UnflowCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(UnflowCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<UnflowCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol UnflowCoreKotlinx_coroutines_coreChildJob <UnflowCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<UnflowCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol UnflowCoreKotlinSequence
@required
- (id<UnflowCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol UnflowCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<UnflowCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<UnflowCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface UnflowCoreKtor_httpHttpMethodCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<UnflowCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) UnflowCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface UnflowCoreKotlinByteIterator : UnflowCoreBase <UnflowCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UnflowCoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface UnflowCoreKtor_httpHttpStatusCode : UnflowCoreBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (UnflowCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface UnflowCoreKtor_utilsGMTDate : UnflowCoreBase <UnflowCoreKotlinComparable>
@property (class, readonly, getter=companion) UnflowCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(UnflowCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (UnflowCoreKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (UnflowCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(UnflowCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(UnflowCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) UnflowCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) UnflowCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface UnflowCoreKtor_httpHttpProtocolVersion : UnflowCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface UnflowCoreKtor_ioMemory : UnflowCoreBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(UnflowCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(UnflowCoreKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (UnflowCoreKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (UnflowCoreKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface UnflowCoreKtor_ioBuffer : UnflowCoreBase
- (instancetype)initWithMemory:(UnflowCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (UnflowCoreKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(UnflowCoreKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
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
@property (readonly) UnflowCoreKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface UnflowCoreKtor_ioChunkBuffer : UnflowCoreKtor_ioBuffer
- (instancetype)initWithMemory:(UnflowCoreKtor_ioMemory *)memory origin:(UnflowCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<UnflowCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(UnflowCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (UnflowCoreKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (UnflowCoreKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) UnflowCoreKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) UnflowCoreKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol UnflowCoreKtor_ioInput <UnflowCoreKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(UnflowCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property UnflowCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol UnflowCoreKotlinAppendable
@required
- (id<UnflowCoreKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<UnflowCoreKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<UnflowCoreKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol UnflowCoreKtor_ioOutput <UnflowCoreKotlinAppendable, UnflowCoreKtor_ioCloseable>
@required
- (id<UnflowCoreKotlinAppendable>)appendCsq:(UnflowCoreKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property UnflowCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface UnflowCoreKtor_ioIoBuffer : UnflowCoreKtor_ioChunkBuffer <UnflowCoreKtor_ioInput, UnflowCoreKtor_ioOutput>
- (instancetype)initWithMemory:(UnflowCoreKtor_ioMemory *)memory origin:(UnflowCoreKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(UnflowCoreKtor_ioMemory *)memory origin:(UnflowCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<UnflowCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<UnflowCoreKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<UnflowCoreKotlinAppendable>)appendCsq:(UnflowCoreKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<UnflowCoreKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<UnflowCoreKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(UnflowCoreKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (UnflowCoreKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (UnflowCoreKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(UnflowCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(UnflowCoreInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(UnflowCoreInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property UnflowCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface UnflowCoreKtor_ioAbstractInput : UnflowCoreBase <UnflowCoreKtor_ioInput>
- (instancetype)initWithHead:(UnflowCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (UnflowCoreKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(UnflowCoreKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (UnflowCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(UnflowCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(UnflowCoreKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(UnflowCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (UnflowCoreKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<UnflowCoreKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<UnflowCoreKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property UnflowCoreKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<UnflowCoreKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface UnflowCoreKtor_ioByteReadPacketBase : UnflowCoreKtor_ioAbstractInput
- (instancetype)initWithHead:(UnflowCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface UnflowCoreKtor_ioByteReadPacketPlatformBase : UnflowCoreKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(UnflowCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface UnflowCoreKtor_ioByteReadPacket : UnflowCoreKtor_ioByteReadPacketPlatformBase <UnflowCoreKtor_ioInput>
- (instancetype)initWithHead:(UnflowCoreKtor_ioChunkBuffer *)head pool:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(UnflowCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<UnflowCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (UnflowCoreKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (UnflowCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(UnflowCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol UnflowCoreKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (UnflowCoreKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol UnflowCoreKotlinSuspendFunction1 <UnflowCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface UnflowCoreKtor_ioByteOrder : UnflowCoreKotlinEnum<UnflowCoreKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) UnflowCoreKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (UnflowCoreKotlinArray<UnflowCoreKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol UnflowCoreKotlinKType
@required
@property (readonly) NSArray<UnflowCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<UnflowCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol UnflowCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<UnflowCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UnflowCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) UnflowCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol UnflowCoreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface UnflowCoreKotlinx_serialization_coreSerialKind : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol UnflowCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<UnflowCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UnflowCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<UnflowCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) UnflowCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol UnflowCoreKtor_httpParameters <UnflowCoreKtor_utilsStringValues>
@required
@property (readonly) UnflowCoreKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface UnflowCoreKtor_httpUrlCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface UnflowCoreKtor_httpHeaderValueWithParameters : UnflowCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<UnflowCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<UnflowCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface UnflowCoreKtor_httpContentType : UnflowCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<UnflowCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<UnflowCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(UnflowCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (UnflowCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (UnflowCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface UnflowCoreKtor_httpURLProtocolCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) UnflowCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) UnflowCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) UnflowCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) UnflowCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) UnflowCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, UnflowCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface UnflowCoreKtor_httpUrlEncodingOption : UnflowCoreKotlinEnum<UnflowCoreKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UnflowCoreKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) UnflowCoreKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) UnflowCoreKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) UnflowCoreKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (UnflowCoreKotlinArray<UnflowCoreKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol UnflowCoreKotlinx_coroutines_coreParentJob <UnflowCoreKotlinx_coroutines_coreJob>
@required
- (UnflowCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol UnflowCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<UnflowCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(UnflowCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(UnflowCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<UnflowCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol UnflowCoreKotlinSuspendFunction0 <UnflowCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface UnflowCoreKtor_httpHttpStatusCodeCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) UnflowCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<UnflowCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface UnflowCoreKtor_utilsGMTDateCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface UnflowCoreKtor_utilsWeekDay : UnflowCoreKotlinEnum<UnflowCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) UnflowCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (UnflowCoreKotlinArray<UnflowCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface UnflowCoreKtor_utilsMonth : UnflowCoreKotlinEnum<UnflowCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) UnflowCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (UnflowCoreKotlinArray<UnflowCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface UnflowCoreKtor_httpHttpProtocolVersionCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (UnflowCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) UnflowCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface UnflowCoreKtor_ioMemoryCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface UnflowCoreKtor_ioBufferCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol UnflowCoreKtor_ioObjectPool <UnflowCoreKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface UnflowCoreKtor_ioChunkBufferCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<UnflowCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<UnflowCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface UnflowCoreKotlinCharArray : UnflowCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(UnflowCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (UnflowCoreKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface UnflowCoreKtor_ioIoBufferCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<UnflowCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<UnflowCoreKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<UnflowCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface UnflowCoreKtor_ioAbstractInputCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface UnflowCoreKtor_ioByteReadPacketBaseCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface UnflowCoreKtor_ioByteReadPacketCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface UnflowCoreKtor_ioByteOrderCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface UnflowCoreKotlinKTypeProjection : UnflowCoreBase
- (instancetype)initWithVariance:(UnflowCoreKotlinKVariance * _Nullable)variance type:(id<UnflowCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (UnflowCoreKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<UnflowCoreKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreKotlinKTypeProjection *)doCopyVariance:(UnflowCoreKotlinKVariance * _Nullable)variance type:(id<UnflowCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) UnflowCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface UnflowCoreKtor_httpHeaderValueParam : UnflowCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface UnflowCoreKtor_httpHeaderValueWithParametersCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<UnflowCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface UnflowCoreKtor_httpContentTypeCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) UnflowCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface UnflowCoreKotlinx_coroutines_coreAtomicDesc : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface UnflowCoreKotlinx_coroutines_coreOpDescriptor : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(UnflowCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : UnflowCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface UnflowCoreKtor_utilsWeekDayCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (UnflowCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface UnflowCoreKtor_utilsMonthCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (UnflowCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface UnflowCoreKotlinCharIterator : UnflowCoreBase <UnflowCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface UnflowCoreKotlinKVariance : UnflowCoreKotlinEnum<UnflowCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UnflowCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) UnflowCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) UnflowCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (UnflowCoreKotlinArray<UnflowCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface UnflowCoreKotlinKTypeProjectionCompanion : UnflowCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (UnflowCoreKotlinKTypeProjection *)contravariantType:(id<UnflowCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (UnflowCoreKotlinKTypeProjection *)covariantType:(id<UnflowCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (UnflowCoreKotlinKTypeProjection *)invariantType:(id<UnflowCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) UnflowCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface UnflowCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : UnflowCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode : UnflowCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(UnflowCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(UnflowCoreBoolean *(^)(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(UnflowCoreBoolean *(^)(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(UnflowCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(UnflowCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : UnflowCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(UnflowCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(UnflowCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(UnflowCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(UnflowCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) UnflowCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
