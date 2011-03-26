//
//  PBGeneratedMessage+Additions.m
//  cinnamon
//
//  Created by Kostia Dombrovsky on 25.03.11.
//  Copyright 2011 Apsmart. All rights reserved.
//

@implementation PBGeneratedMessage (Additions)

- (void) dump: (NSString*) fileName
{
	NSArray*  paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString* documentsDirectory = [paths objectAtIndex: 0];
    NSString* logPath = [documentsDirectory stringByAppendingPathComponent: fileName];
	
	[[NSFileManager defaultManager] removeItemAtPath: logPath error: nil];
	[[NSFileManager defaultManager] createFileAtPath: logPath contents: nil attributes: nil];
	
	NSFileHandle* fileHandle = [NSFileHandle fileHandleForWritingAtPath: logPath];
	[fileHandle writeData: self.data];
	[fileHandle closeFile];
	
	CFShow(logPath);
}

@end
