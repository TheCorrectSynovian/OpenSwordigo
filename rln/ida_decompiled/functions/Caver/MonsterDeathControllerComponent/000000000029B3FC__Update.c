/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B3FC
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent6UpdateEf
 * Demangled: Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002001D0  Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Callees: 3
 *   0x00000000001F3A20  Caver::MonsterDeathControllerComponent::Explode(void)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 40
 *   insn=0x000000000029B408 string=0x000000000029B40C "a"
 *   insn=0x000000000029B40C string=0x000000000029B410 "h"
 *   insn=0x000000000029B410 string=0x000000000029B414 " ( "
 *   insn=0x000000000029B418 string=0x000000000029B41C "`"
 *   insn=0x000000000029B420 string=0x000000000029B424 "H"
 *   insn=0x000000000029B420 string=0x000000000029B45C "H"
 *   insn=0x000000000029B424 string=0x000000000029B428 "h^@"
 *   insn=0x000000000029B428 string=0x000000000029B42C "t"
 *   insn=0x000000000029B42C string=0x000000000029B430 "I"
 *   insn=0x000000000029B430 string=0x000000000029B434 "!"
 *   insn=0x000000000029B440 string=0x000000000029B444 "B"
 *   insn=0x000000000029B444 string=0x000000000029B448 "@ !"
 *   insn=0x000000000029B448 string=0x000000000029B44C "i"
 *   insn=0x000000000029B44C string=0x000000000029B450 "\nu@"
 *   insn=0x000000000029B45C string=0x0000000000583944 "\n"
 *   insn=0x000000000029B464 string=0x000000000029B468 "-"
 *   insn=0x000000000029B468 string=0x000000000029B46C "hB@"
 *   insn=0x000000000029B470 string=0x000000000029B474 "`"
 *   insn=0x000000000029B47C string=0x000000000029B480 "hB@"
 *   insn=0x000000000029B47C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029B488 string=0x000000000029B48C "\t"
 *   insn=0x000000000029B48C string=0x000000000029B490 "j"
 *   insn=0x000000000029B49C string=0x000000000029B4A0 "#MG"
 *   insn=0x000000000029B4A0 string=0x000000000029B4A4 "C8#"
 *   insn=0x000000000029B4A4 string=0x000000000029B4A8 "c"
 *   insn=0x000000000029B4A8 string=0x000000000029B4AC "` !"
 *   insn=0x000000000029B4B0 string=0x000000000029B4B4 "J"
 *   insn=0x000000000029B4B0 string=0x000000000029B4E0 "y@"
 *   insn=0x000000000029B4B8 string=0x000000000029B4BC "*"
 *   insn=0x000000000029B4C8 string=0x000000000029B4CC "5j"
 *   insn=0x000000000029B4CC string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000029B4D4 string=0x000000000029B4D8 "t"
 *   insn=0x000000000029B4D8 string=0x000000000029B4DC "h^@"
 *   insn=0x000000000029B4E0 string=0x000000000029B4E4 "if"
 *   insn=0x000000000029B4F0 string=0x000000000029B4F4 "i"
 *   insn=0x000000000029B4F4 string=0x000000000029B4F8 "Ja"
 *   insn=0x000000000029B4F8 string=0x000000000029B4FC "h^@"
 *   insn=0x000000000029B4F8 string=0x00000000001F3A20 "P'"
 *   insn=0x000000000029B500 string=0x000000000029B504 "\t"
 *   insn=0x000000000029B504 string=0x000000000029B508 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterDeathControllerComponent::Update(__int64 this, float a2)
{
  __int64 v2; // x19
  int v3; // w8
  float v4; // s0
  __int64 v5; // x8
  __int64 v6; // x20
  float v7; // s0
  int v8; // w10
  _DWORD *v9; // x9
  __int64 v10; // x8

  v2 = this;
  v3 = *(_DWORD *)(this + 192);
  v4 = *(float *)(this + 172) + a2;
  *(float *)(this + 172) = v4;
  if ( v3 != 1 )
  {
    if ( v3 )
      return this;
    v5 = *(_QWORD *)(this + 184);
    v6 = *(_QWORD *)(this + 40);
    v7 = *(float *)(v5 + 112);
    if ( fabsf(v7 - *(float *)(v6 + 112)) <= 0.0001 )
    {
      v9 = (_DWORD *)(v6 + 116);
      if ( fabsf(*(float *)(v5 + 116) - *(float *)(v6 + 116)) <= 0.0001 )
      {
LABEL_13:
        *(_DWORD *)(v6 + 120) = *(_DWORD *)(v5 + 120);
        *(_DWORD *)(v2 + 176) = 1060320051;
        this = Caver::MonsterDeathControllerComponent::Explode((Caver::MonsterDeathControllerComponent *)v2);
        *(_BYTE *)(*(_QWORD *)(v2 + 184) + 232LL) = 1;
        *(_DWORD *)(v2 + 192) = 1;
        return this;
      }
      v8 = *(_DWORD *)(v5 + 116);
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 116);
      v9 = (_DWORD *)(v6 + 116);
    }
    *(float *)(v6 + 112) = v7;
    *v9 = v8;
    if ( !*(_BYTE *)(v6 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v6);
      *(_BYTE *)(v6 + 180) = 1;
      v6 = *(_QWORD *)(v2 + 40);
      v5 = *(_QWORD *)(v2 + 184);
    }
    goto LABEL_13;
  }
  if ( v4 > 0.01 )
  {
    v10 = *(_QWORD *)(this + 128);
    if ( !v10 )
    {
      this = Caver::ComponentOutletBase::Connect(
               (Caver::ComponentOutletBase *)(this + 112),
               (const Caver::Component *)this);
      v10 = *(_QWORD *)(v2 + 128);
    }
    *(_BYTE *)(v10 + 361) = 1;
    *(_DWORD *)(v2 + 192) = 2;
  }
  return this;
}

