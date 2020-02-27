// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITSMAGIC_ItsMagicCharacter_generated_h
#error "ItsMagicCharacter.generated.h already included, missing '#pragma once' in ItsMagicCharacter.h"
#endif
#define ITSMAGIC_ItsMagicCharacter_generated_h

#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_SPARSE_DATA
#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_RPC_WRAPPERS
#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItsMagicCharacter(); \
	friend struct Z_Construct_UClass_AItsMagicCharacter_Statics; \
public: \
	DECLARE_CLASS(AItsMagicCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ItsMagic"), NO_API) \
	DECLARE_SERIALIZER(AItsMagicCharacter)


#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItsMagicCharacter(); \
	friend struct Z_Construct_UClass_AItsMagicCharacter_Statics; \
public: \
	DECLARE_CLASS(AItsMagicCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ItsMagic"), NO_API) \
	DECLARE_SERIALIZER(AItsMagicCharacter)


#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItsMagicCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItsMagicCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItsMagicCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItsMagicCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItsMagicCharacter(AItsMagicCharacter&&); \
	NO_API AItsMagicCharacter(const AItsMagicCharacter&); \
public:


#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItsMagicCharacter(AItsMagicCharacter&&); \
	NO_API AItsMagicCharacter(const AItsMagicCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItsMagicCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItsMagicCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItsMagicCharacter)


#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AItsMagicCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AItsMagicCharacter, FollowCamera); }


#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_9_PROLOG
#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_SPARSE_DATA \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_RPC_WRAPPERS \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_INCLASS \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_SPARSE_DATA \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ItsMagic_Source_ItsMagic_ItsMagicCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ITSMAGIC_API UClass* StaticClass<class AItsMagicCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ItsMagic_Source_ItsMagic_ItsMagicCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
