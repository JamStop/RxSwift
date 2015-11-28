//
//  RXObjCRuntime+Testing.h
//  RxTests
//
//  Created by Krunoslav Zaher on 11/25/15.
//
//

#import <RxCocoa/RxCocoa.h>

@protocol SentMessageTestClassCreationProtocol<NSObject>
-(instancetype __nonnull)init;

@property (nonatomic, copy) NSArray<NSArray * > * __nonnull messages;
@property (nonatomic, copy) NSArray<NSArray * > * __nonnull baseMessages;

@end

@interface RXObjCTestRuntime : NSObject

+(id __nonnull)castClosure:(int (^ __nonnull)(int))closure;
+(BOOL)isForwardingIMP:(IMP __nullable)implementation;

@end

@interface _TestSendMessage : NSObject

@end

typedef struct some_insanely_large_struct {
    int a[8];
    const char * __nullable some_large_text; //:)
    struct some_insanely_large_struct * __nullable next;
} some_insanely_large_struct_t;

#define DECLARE_OBSERVING_CLASS_PAIR_FOR_TEST(testName)                                                              \
@interface SendMessageTestBase_ ## testName : NSObject { }                                                           \
                                                                                                                     \
@property (nonatomic, copy) NSArray<NSArray * > * __nonnull baseMessages;                                            \
                                                                                                                     \
-(id __nonnull)justCalledToSayObject:(id __nonnull)value;                                                            \
                                                                                                                     \
-(void)voidJustCalledToSayObject:(id __nonnull)value;                                                                \
                                                                                                                     \
-(Class __nonnull)justCalledToSayClass:(Class __nonnull)value;                                                       \
                                                                                                                     \
-(void)voidJustCalledToSayClass:(Class __nonnull)value;                                                              \
                                                                                                                     \
-(void (^ __nonnull)() )justCalledToSayClosure:(void (^ __nonnull)())value;                                          \
                                                                                                                     \
-(void)voidJustCalledToSayClosure:(void (^ __nonnull)())value;                                                       \
                                                                                                                     \
-(char)justCalledToSayChar:(char)value;                                                                              \
                                                                                                                     \
-(void)voidJustCalledToSayChar:(char)value;                                                                          \
                                                                                                                     \
-(short)justCalledToSayShort:(short)value;                                                                           \
                                                                                                                     \
-(void)voidJustCalledToSayShort:(short)value;                                                                        \
                                                                                                                     \
-(int)justCalledToSayInt:(int)value;                                                                                 \
                                                                                                                     \
-(void)voidJustCalledToSayInt:(int)value;                                                                            \
                                                                                                                     \
-(long)justCalledToSayLong:(long)value;                                                                              \
                                                                                                                     \
-(void)voidJustCalledToSayLong:(long)value;                                                                          \
                                                                                                                     \
-(long long)justCalledToSayLongLong:(long long)value;                                                                \
                                                                                                                     \
-(void)voidJustCalledToSayLongLong:(long long)value;                                                                 \
                                                                                                                     \
-(unsigned char)justCalledToSayUnsignedChar:(unsigned char)value;                                                    \
                                                                                                                     \
-(void)voidJustCalledToSayUnsignedChar:(unsigned char)value;                                                         \
                                                                                                                     \
-(unsigned short)justCalledToSayUnsignedShort:(unsigned short)value;                                                 \
                                                                                                                     \
-(void)voidJustCalledToSayUnsignedShort:(unsigned short)value;                                                       \
                                                                                                                     \
-(unsigned int)justCalledToSayUnsignedInt:(unsigned int)value;                                                       \
                                                                                                                     \
-(void)voidJustCalledToSayUnsignedInt:(unsigned int)value;                                                           \
                                                                                                                     \
-(unsigned long)justCalledToSayUnsignedLong:(unsigned long)value;                                                    \
                                                                                                                     \
-(void)voidJustCalledToSayUnsignedLong:(unsigned long)value;                                                         \
                                                                                                                     \
-(unsigned long long)justCalledToSayUnsignedLongLong:(unsigned long long)value;                                      \
                                                                                                                     \
-(void)voidJustCalledToSayUnsignedLongLong:(unsigned long long)value;                                                \
                                                                                                                     \
-(float)justCalledToSayFloat:(float)value;                                                                           \
                                                                                                                     \
-(void)voidJustCalledToSayFloat:(float)value;                                                                        \
                                                                                                                     \
-(double)justCalledToSayDouble:(double)value;                                                                        \
                                                                                                                     \
-(void)voidJustCalledToSayDouble:(double)value;                                                                      \
                                                                                                                     \
-(BOOL)justCalledToSayBool:(BOOL)value;                                                                              \
                                                                                                                     \
-(void)voidJustCalledToSayBool:(BOOL)value;                                                                          \
                                                                                                                     \
-(NSInteger)justCalledToSayLarge:(some_insanely_large_struct_t)value;                                                \
                                                                                                                     \
-(void)voidJustCalledToSayLarge:(some_insanely_large_struct_t)value;                                                 \
                                                                                                                     \
-(const char * __nonnull)justCalledToSayConstChar:(const char * __nonnull)value;                                     \
                                                                                                                     \
-(void)voidJustCalledToSayConstChar:(const char * __nonnull)value;                                                   \
                                                                                                                     \
-(NSInteger)message_allSupportedParameters:(id __nonnull)p1                                                          \
                                        p2:(Class __nonnull)p2                                                       \
                                        p3:(int32_t (^ __nonnull)(int32_t))p3                                        \
                                        p4:(int8_t)p4                                                                \
                                        p5:(int16_t)p5                                                               \
                                        p6:(int32_t)p6                                                               \
                                        p7:(int64_t)p7                                                               \
                                        p8:(uint8_t)p8                                                               \
                                        p9:(uint16_t)p9                                                              \
                                        p10:(uint32_t)p10                                                            \
                                        p11:(uint64_t)p11                                                            \
                                        p12:(float)p12                                                               \
                                        p13:(double)p13                                                              \
                                        p14:(const int8_t * __nonnull)p14                                            \
                                        p15:(int8_t * __nonnull)p15                                                  \
                                        p16:(some_insanely_large_struct_t)p16;                                       \
                                                                                                                     \
@end                                                                                                                 \
                                                                                                                     \
@interface SendMessageTest_ ## testName : SendMessageTestBase_ ## testName<SentMessageTestClassCreationProtocol> { } \
                                                                                                                     \
@property (nonatomic, copy) NSArray<NSArray * > * __nonnull messages;                                                \
                                                                                                                     \
@end


DECLARE_OBSERVING_CLASS_PAIR_FOR_TEST(acting_forwarding)

DECLARE_OBSERVING_CLASS_PAIR_FOR_TEST(forwarding_basic)
DECLARE_OBSERVING_CLASS_PAIR_FOR_TEST(generating_dynamic_class)