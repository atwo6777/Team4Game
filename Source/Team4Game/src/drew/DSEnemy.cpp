// Fill out your copyright notice in the Description page of Project Settings.

#include "../../inc/DSEnemy.h"
#include "Components/SphereComponent.h"


// Sets default values
ADSEnemy::ADSEnemy(const class FObjectInitializer &Initializer)
: Super(Initializer)
{

 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
	USphereComponent * sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	sphere->SetCollisionProfileName("EnemyPawn");
	sphere->InitSphereRadius(20.0f);
	SetRootComponent(sphere);
	visual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual"));
	
	visual->SetupAttachment(sphere);
}

// Called when the game starts or when spawned
void ADSEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADSEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ADSEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADSEnemy::SendHighScore() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg");
	int test = 7;
	char name[25] = "team4test";
	int result = system("cmd /c hssclient.exe 52.160.46.238 1 \"Testing	\" 100 & pwd & pause");
}

void ADSEnemy::AddToScore() {

}

int ADSEnemy::GetScore() {
	return CurrScore;
}

void ADSEnemy::SetScore(int newscore) {
}