// CinDocument.h
//
// Copyright (c) 2004-2009 The OpenVanilla Project (http://openvanilla.org)
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. Neither the name of OpenVanilla nor the names of its contributors
//    may be used to endorse or promote products derived from this software
//    without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#import <Cocoa/Cocoa.h>
#import "KeyTable.h"
#import "CharTable.h"

#define MSG(x)      [[NSBundle mainBundle] localizedStringForKey:x value:nil table:nil]
#define helpAncor(x) [[NSHelpManager sharedHelpManager] openHelpAnchor:x inBook:[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleHelpBookName"]]

@interface CinDocument : NSDocument
{
    IBOutlet id listChardef;
    IBOutlet id listKeyname;
    IBOutlet id scrollChardef;
    IBOutlet id scrollKeyname;
    IBOutlet id searchChardef;
    IBOutlet id searchKeyname;		
    IBOutlet id txtCname;
    IBOutlet id txtEname;
    IBOutlet id txtTcname;
    IBOutlet id txtScname;
    IBOutlet id txtSelkey;
    IBOutlet id msgIndicator;
    IBOutlet id msgText;	
    IBOutlet id msgWindow;
    IBOutlet id window;	

	NSString *_ename;
	NSString *_cname;
	NSString *_tcname;
	NSString *_scname;
	NSString *_selkey;
	NSString *_endkey;
	
	KeyTable * k;
	CharTable * c;	
	NSString *currentPath;
	BOOL isEdited;
}
- (IBAction)chardefHelp:(id)sender;
- (IBAction)chardefAdd:(id)sender;
- (IBAction)chardefRemove:(id)sender;
- (IBAction)chardefSearch:(id)sender;
- (IBAction)keymapHelp:(id)sender;
- (IBAction)keynameAdd:(id)sender;
- (IBAction)keynameRemove:(id)sender;
- (IBAction)keynameSearch:(id)sender;
@end