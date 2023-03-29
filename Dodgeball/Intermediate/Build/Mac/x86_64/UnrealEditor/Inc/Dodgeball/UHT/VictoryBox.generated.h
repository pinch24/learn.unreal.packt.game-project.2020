// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VictoryBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DODGEBALL_VictoryBox_generated_h
#error "VictoryBox.generated.h already included, missing '#pragma once' in VictoryBox.h"
#endif
#define DODGEBALL_VictoryBox_generated_h

#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_SPARSE_DATA
#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_ACCESSORS
#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
public: \
	DECLARE_CLASS(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AVictoryBox)


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
public: \
	DECLARE_CLASS(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AVictoryBox)


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVictoryBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVictoryBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryBox(AVictoryBox&&); \
	NO_API AVictoryBox(const AVictoryBox&); \
public: \
	NO_API virtual ~AVictoryBox();


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryBox(AVictoryBox&&); \
	NO_API AVictoryBox(const AVictoryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictoryBox) \
	NO_API virtual ~AVictoryBox();


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_10_PROLOG
#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_SPARSE_DATA \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_RPC_WRAPPERS \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_ACCESSORS \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_INCLASS \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_SPARSE_DATA \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_ACCESSORS \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_INCLASS_NO_PURE_DECLS \
	FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class AVictoryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mk_Studies_learn_unreal_learn_unreal_game_project_2020_Dodgeball_Source_Dodgeball_VictoryBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
