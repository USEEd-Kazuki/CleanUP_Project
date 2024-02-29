// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "CleanUtility.generated.h"

/**
 * 
 */
UCLASS()
class PREFIXPROJECT_API UCleanUtility : public UAssetActionUtility
{
	GENERATED_BODY()

public:
	UFUNCTION(CallInEditor)
	void CleanFolder(FString ParentFolder = FString("/Game"));

private:
	/**
	* スクリーンへのメッセージ表示
	* @param Message - メッセージ
	* @param Color - メッセージに使用する色
	**/
	void PrintToScreen(FString Message, FColor Color);

	/**
	* ユーザーへのフィードバック
	* @param Method - 使用されたメソッド
	* @param Counter - 変換されたアセット数
	**/
	void GiveFeedback(FString Method, uint32 Counter);
};
