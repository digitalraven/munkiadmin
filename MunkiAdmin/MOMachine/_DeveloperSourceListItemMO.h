// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to DeveloperSourceListItemMO.h instead.

#import <CoreData/CoreData.h>
#import "PackageSourceListItemMO.h"

extern const struct DeveloperSourceListItemMORelationships {
	__unsafe_unretained NSString *developerReference;
} DeveloperSourceListItemMORelationships;

@class DeveloperMO;

@interface DeveloperSourceListItemMOID : PackageSourceListItemMOID {}
@end

@interface _DeveloperSourceListItemMO : PackageSourceListItemMO {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) DeveloperSourceListItemMOID* objectID;

@property (nonatomic, strong) DeveloperMO *developerReference;

//- (BOOL)validateDeveloperReference:(id*)value_ error:(NSError**)error_;

@end

@interface _DeveloperSourceListItemMO (CoreDataGeneratedPrimitiveAccessors)

- (DeveloperMO*)primitiveDeveloperReference;
- (void)setPrimitiveDeveloperReference:(DeveloperMO*)value;

@end
