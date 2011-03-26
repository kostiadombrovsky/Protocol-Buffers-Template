// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class CiklumOffice;
@class CiklumOffice_AddressGPB;
@class CiklumOffice_AddressGPB_Builder;
@class CiklumOffice_Builder;
@class CiklumOffice_EmployeeGPB;
@class CiklumOffice_EmployeeGPB_Builder;
typedef enum {
  CiklumOffice_EmployeeGPB_EmployeeTypeIOsdev = 1,
  CiklumOffice_EmployeeGPB_EmployeeTypeAndroidDev = 2,
  CiklumOffice_EmployeeGPB_EmployeeTypeWp7Dev = 3,
  CiklumOffice_EmployeeGPB_EmployeeTypeManager = 4,
} CiklumOffice_EmployeeGPB_EmployeeType;

BOOL CiklumOffice_EmployeeGPB_EmployeeTypeIsValidValue(CiklumOffice_EmployeeGPB_EmployeeType value);


@interface ProtoBufRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface CiklumOffice : PBGeneratedMessage {
@private
  BOOL hasName_:1;
  BOOL hasAddress_:1;
  NSString* name;
  CiklumOffice_AddressGPB* address;
  NSMutableArray* mutableEmployeesList;
}
- (BOOL) hasName;
- (BOOL) hasAddress;
@property (readonly, retain) NSString* name;
@property (readonly, retain) CiklumOffice_AddressGPB* address;
- (NSArray*) employeesList;
- (CiklumOffice_EmployeeGPB*) employeesAtIndex:(int32_t) index;

+ (CiklumOffice*) defaultInstance;
- (CiklumOffice*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (CiklumOffice_Builder*) builder;
+ (CiklumOffice_Builder*) builder;
+ (CiklumOffice_Builder*) builderWithPrototype:(CiklumOffice*) prototype;

+ (CiklumOffice*) parseFromData:(NSData*) data;
+ (CiklumOffice*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (CiklumOffice*) parseFromInputStream:(NSInputStream*) input;
+ (CiklumOffice*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (CiklumOffice*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (CiklumOffice*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface CiklumOffice_AddressGPB : PBGeneratedMessage {
@private
  BOOL hasAddress_:1;
  BOOL hasCountry_:1;
  BOOL hasCity_:1;
  NSString* address;
  NSString* country;
  NSString* city;
}
- (BOOL) hasAddress;
- (BOOL) hasCountry;
- (BOOL) hasCity;
@property (readonly, retain) NSString* address;
@property (readonly, retain) NSString* country;
@property (readonly, retain) NSString* city;

+ (CiklumOffice_AddressGPB*) defaultInstance;
- (CiklumOffice_AddressGPB*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (CiklumOffice_AddressGPB_Builder*) builder;
+ (CiklumOffice_AddressGPB_Builder*) builder;
+ (CiklumOffice_AddressGPB_Builder*) builderWithPrototype:(CiklumOffice_AddressGPB*) prototype;

+ (CiklumOffice_AddressGPB*) parseFromData:(NSData*) data;
+ (CiklumOffice_AddressGPB*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (CiklumOffice_AddressGPB*) parseFromInputStream:(NSInputStream*) input;
+ (CiklumOffice_AddressGPB*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (CiklumOffice_AddressGPB*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (CiklumOffice_AddressGPB*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface CiklumOffice_AddressGPB_Builder : PBGeneratedMessage_Builder {
@private
  CiklumOffice_AddressGPB* result;
}

- (CiklumOffice_AddressGPB*) defaultInstance;

- (CiklumOffice_AddressGPB_Builder*) clear;
- (CiklumOffice_AddressGPB_Builder*) clone;

- (CiklumOffice_AddressGPB*) build;
- (CiklumOffice_AddressGPB*) buildPartial;

- (CiklumOffice_AddressGPB_Builder*) mergeFrom:(CiklumOffice_AddressGPB*) other;
- (CiklumOffice_AddressGPB_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (CiklumOffice_AddressGPB_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasAddress;
- (NSString*) address;
- (CiklumOffice_AddressGPB_Builder*) setAddress:(NSString*) value;
- (CiklumOffice_AddressGPB_Builder*) clearAddress;

- (BOOL) hasCountry;
- (NSString*) country;
- (CiklumOffice_AddressGPB_Builder*) setCountry:(NSString*) value;
- (CiklumOffice_AddressGPB_Builder*) clearCountry;

- (BOOL) hasCity;
- (NSString*) city;
- (CiklumOffice_AddressGPB_Builder*) setCity:(NSString*) value;
- (CiklumOffice_AddressGPB_Builder*) clearCity;
@end

@interface CiklumOffice_EmployeeGPB : PBGeneratedMessage {
@private
  BOOL hasName_:1;
  BOOL hasAddress_:1;
  BOOL hasPhoto_:1;
  BOOL hasType_:1;
  NSString* name;
  CiklumOffice_AddressGPB* address;
  NSData* photo;
  CiklumOffice_EmployeeGPB_EmployeeType type;
}
- (BOOL) hasName;
- (BOOL) hasType;
- (BOOL) hasAddress;
- (BOOL) hasPhoto;
@property (readonly, retain) NSString* name;
@property (readonly) CiklumOffice_EmployeeGPB_EmployeeType type;
@property (readonly, retain) CiklumOffice_AddressGPB* address;
@property (readonly, retain) NSData* photo;

+ (CiklumOffice_EmployeeGPB*) defaultInstance;
- (CiklumOffice_EmployeeGPB*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (CiklumOffice_EmployeeGPB_Builder*) builder;
+ (CiklumOffice_EmployeeGPB_Builder*) builder;
+ (CiklumOffice_EmployeeGPB_Builder*) builderWithPrototype:(CiklumOffice_EmployeeGPB*) prototype;

+ (CiklumOffice_EmployeeGPB*) parseFromData:(NSData*) data;
+ (CiklumOffice_EmployeeGPB*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (CiklumOffice_EmployeeGPB*) parseFromInputStream:(NSInputStream*) input;
+ (CiklumOffice_EmployeeGPB*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (CiklumOffice_EmployeeGPB*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (CiklumOffice_EmployeeGPB*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface CiklumOffice_EmployeeGPB_Builder : PBGeneratedMessage_Builder {
@private
  CiklumOffice_EmployeeGPB* result;
}

- (CiklumOffice_EmployeeGPB*) defaultInstance;

- (CiklumOffice_EmployeeGPB_Builder*) clear;
- (CiklumOffice_EmployeeGPB_Builder*) clone;

- (CiklumOffice_EmployeeGPB*) build;
- (CiklumOffice_EmployeeGPB*) buildPartial;

- (CiklumOffice_EmployeeGPB_Builder*) mergeFrom:(CiklumOffice_EmployeeGPB*) other;
- (CiklumOffice_EmployeeGPB_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (CiklumOffice_EmployeeGPB_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (CiklumOffice_EmployeeGPB_Builder*) setName:(NSString*) value;
- (CiklumOffice_EmployeeGPB_Builder*) clearName;

- (BOOL) hasType;
- (CiklumOffice_EmployeeGPB_EmployeeType) type;
- (CiklumOffice_EmployeeGPB_Builder*) setType:(CiklumOffice_EmployeeGPB_EmployeeType) value;
- (CiklumOffice_EmployeeGPB_Builder*) clearType;

- (BOOL) hasAddress;
- (CiklumOffice_AddressGPB*) address;
- (CiklumOffice_EmployeeGPB_Builder*) setAddress:(CiklumOffice_AddressGPB*) value;
- (CiklumOffice_EmployeeGPB_Builder*) setAddressBuilder:(CiklumOffice_AddressGPB_Builder*) builderForValue;
- (CiklumOffice_EmployeeGPB_Builder*) mergeAddress:(CiklumOffice_AddressGPB*) value;
- (CiklumOffice_EmployeeGPB_Builder*) clearAddress;

- (BOOL) hasPhoto;
- (NSData*) photo;
- (CiklumOffice_EmployeeGPB_Builder*) setPhoto:(NSData*) value;
- (CiklumOffice_EmployeeGPB_Builder*) clearPhoto;
@end

@interface CiklumOffice_Builder : PBGeneratedMessage_Builder {
@private
  CiklumOffice* result;
}

- (CiklumOffice*) defaultInstance;

- (CiklumOffice_Builder*) clear;
- (CiklumOffice_Builder*) clone;

- (CiklumOffice*) build;
- (CiklumOffice*) buildPartial;

- (CiklumOffice_Builder*) mergeFrom:(CiklumOffice*) other;
- (CiklumOffice_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (CiklumOffice_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (CiklumOffice_Builder*) setName:(NSString*) value;
- (CiklumOffice_Builder*) clearName;

- (BOOL) hasAddress;
- (CiklumOffice_AddressGPB*) address;
- (CiklumOffice_Builder*) setAddress:(CiklumOffice_AddressGPB*) value;
- (CiklumOffice_Builder*) setAddressBuilder:(CiklumOffice_AddressGPB_Builder*) builderForValue;
- (CiklumOffice_Builder*) mergeAddress:(CiklumOffice_AddressGPB*) value;
- (CiklumOffice_Builder*) clearAddress;

- (NSArray*) employeesList;
- (CiklumOffice_EmployeeGPB*) employeesAtIndex:(int32_t) index;
- (CiklumOffice_Builder*) replaceEmployeesAtIndex:(int32_t) index with:(CiklumOffice_EmployeeGPB*) value;
- (CiklumOffice_Builder*) addEmployees:(CiklumOffice_EmployeeGPB*) value;
- (CiklumOffice_Builder*) addAllEmployees:(NSArray*) values;
- (CiklumOffice_Builder*) clearEmployeesList;
@end

