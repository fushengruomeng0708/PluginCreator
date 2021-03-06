#pragma once

#include "PluginDescriptor.h"

class FPluginHelpers
{
public:
	/** Writes an output file. Taken from GameProjectUtils.h
	*	@param OutputFileName - filename; includes a path
	*	@param OutputFileContents - contents of the file
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@return true if file was sucessfully written, false otherwise*/
	static bool WriteOutputFile(const FString& OutputFilename, const FString& OutputFileContents, FText& OutFailReason);

	/** Returns the contents of the specified template file. Taken from GameProjectUtils.h
	*	@param TemplateFileName - name of the file with fulll path
	*	@param OutFileContents - contents of given file
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@return true if the file was loaded, false otherwise*/
	static bool ReadTemplateFile(const FString& TemplateFileName, FString& OutFileContents, FText& OutFailReason);

	/** Returns a comma delimited string comprised of all the elements in InList. If bPlaceQuotesAroundEveryElement, every element is within quotes.
	*	Taken from GameProjectUtils.h*/
	static FString MakeCommaDelimitedList(const TArray<FString>& InList, bool bPlaceQuotesAroundEveryElement = true);

	/** Create a .build.cs file for a plugin.
	*	@param NewBuildFileName - filename with full path
	*	@param PluginName - name of the plugin this file belongs to
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@param TemplateType - empty by default; can be Blank, Basic or Advanced
	*	@return true if file was created, false otherwise*/
	static bool CreatePluginBuildFile(const FString& NewBuildFileName, const FString& PluginName, FText& OutFailReason, FString TemplateType = FString(""));

	/** Create plugin header file.
	*	@param FolderPath - filename with full path
	*	@param PluginName - name of the plugin this file belongs to
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@param TemplateType - empty by default; can be Blank, Basic or Advanced
	*	@return true if file was created, false otherwise*/
	static bool CreatePluginHeaderFile(const FString& FolderPath, const FString& PluginName, FText& OutFailReason, FString TemplateType = FString(""));

	/** Create plugin style files (source and header).
	*	@param PrivateFolderPath - Private folder path for source file
	*	@param PublicFolderPath - Public folder path for header file
	*	@param PluginName - name of the plugin this file belongs to
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@param TemplateType - empty by default; can be Blank, Basic or Advanced
	*	@return true if file was created, false otherwise*/
	static bool CreatePluginStyleFiles(const FString& PrivateFolderPath, const FString& PublicFolderPath, const FString& PluginName, FText& OutFailReason, FString TemplateType = FString(""));

	/** Create plugin source file.
	*	@param FolderPath - filename with full path
	*	@param PluginName - name of the plugin this file belongs to
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@param TemplateType - empty by default; can be Blank, Basic or Advanced
	*	@return true if file was created, false otherwise*/
	static bool CreatePluginCPPFile(const FString& FolderPath, const FString& PluginName, FText& OutFailReason, FString TemplateType = FString(""));

	/** Create plugin UI commands file.
	*	@param FolderPath - filename with full path
	*	@param PluginName - name of the plugin this file belongs to
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@param TemplateType - empty by default; can be Blank, Basic or Advanced
	*	@return true if file was created, false otherwise*/
	static bool CreateCommandsFile(const FString& FolderPath, const FString& PluginName, FText& OutFailReason, FString TemplateType = FString(""));

	/** Create plugin private precompiled header file.
	*	@param FolderPath - filename with full path
	*	@param PluginName - name of the plugin this file belongs to
	*	@param OutFailReason - fail reason text if something goes wrong
	*	@param TemplateType - empty by default; can be Blank, Basic or Advanced
	*	@return true if file was created, false otherwise*/
	static bool CreatePrivatePCHFile(const FString& FolderPath, const FString& PluginName, FText& OutFailReason, FString TemplateType = FString(""));

	/** Make include list string from given string array.
	*	@param InList - include file names
	*	@return String that can be written to file*/
	static FString MakeIncludeList(const TArray<FString>& InList);

	/** Save plugin descriptor under given path as .uplugin file using JSon
	*	@param NewProjectFilename - filename with full path
	*	@param PluginDescriptor - descriptor to save
	*	@return true if file was created, false otherwise*/
	static bool SavePluginDescriptor(const FString& NewProjectFilename, const FPluginDescriptor& PluginDescriptor);

	/** Checks the name for illegal characters. Taken from GameProjectUtils.h */
	static bool NameContainsOnlyLegalCharacters(const FString& TestName, FString& OutIllegalCharacters);

};