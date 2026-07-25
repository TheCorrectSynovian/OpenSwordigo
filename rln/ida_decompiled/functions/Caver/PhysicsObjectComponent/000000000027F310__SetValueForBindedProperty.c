/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F310
 * Mangled: _ZN5Caver22PhysicsObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000203530  Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 42
 *   insn=0x000000000027F31C string=0x000000000027F320 "T"
 *   insn=0x000000000027F328 string=0x000000000027F32C "? "
 *   insn=0x000000000027F334 string=0x000000000027F338 "I"
 *   insn=0x000000000027F33C string=0x000000000027F340 ")"
 *   insn=0x000000000027F340 string=0x000000000027F344 "(y"
 *   insn=0x000000000027F344 string=0x000000000027F348 ""
 *   insn=0x000000000027F34C string=0x000000000027F350 "H"
 *   insn=0x000000000027F34C string=0x000000000027F360 "H"
 *   insn=0x000000000027F34C string=0x000000000027F370 "H"
 *   insn=0x000000000027F34C string=0x000000000027F384 "H"
 *   insn=0x000000000027F34C string=0x000000000027F3A8 "H"
 *   insn=0x000000000027F34C string=0x000000000027F3B8 "H"
 *   insn=0x000000000027F34C string=0x000000000027F3D4 "H"
 *   insn=0x000000000027F34C string=0x000000000027F3E4 "H"
 *   insn=0x000000000027F34C string=0x000000000027F3F4 "H"
 *   insn=0x000000000027F350 string=0x000000000027F354 ""
 *   insn=0x000000000027F354 string=0x000000000027F358 "h"
 *   insn=0x000000000027F358 string=0x000000000027F35C ","
 *   insn=0x000000000027F360 string=0x000000000027F364 ""
 *   insn=0x000000000027F364 string=0x000000000027F368 "h"
 *   insn=0x000000000027F368 string=0x000000000027F36C "("
 *   insn=0x000000000027F370 string=0x000000000027F374 "i"
 *   insn=0x000000000027F374 string=0x000000000027F378 ""
 *   insn=0x000000000027F384 string=0x000000000027F388 "i"
 *   insn=0x000000000027F388 string=0x000000000027F38C ""
 *   insn=0x000000000027F398 string=0x00000000001F8E10 "0'"
 *   insn=0x000000000027F39C string=0x000000000027F3A0 "hr"
 *   insn=0x000000000027F3A8 string=0x000000000027F3AC ""
 *   insn=0x000000000027F3AC string=0x000000000027F3B0 "h"
 *   insn=0x000000000027F3B8 string=0x000000000027F3BC "I"
 *   insn=0x000000000027F3BC string=0x000000000027F3C0 "!mI"
 *   insn=0x000000000027F3C8 string=0x000000000027F3CC "`"
 *   insn=0x000000000027F3D4 string=0x000000000027F3D8 ""
 *   insn=0x000000000027F3D8 string=0x000000000027F3DC "h"
 *   insn=0x000000000027F3DC string=0x000000000027F3E0 ""
 *   insn=0x000000000027F3E4 string=0x000000000027F3E8 ""
 *   insn=0x000000000027F3E8 string=0x000000000027F3EC "h"
 *   insn=0x000000000027F3EC string=0x000000000027F3F0 ""
 *   insn=0x000000000027F3F4 string=0x000000000027F3F8 ""
 *   insn=0x000000000027F3F8 string=0x000000000027F3FC "h"
 *   insn=0x000000000027F408 string=0x00000000001F9320 "0'"
 *   insn=0x000000000027F42C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v3; // x19
  int v4; // w9
  int v5; // w8
  _QWORD v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v3 = this;
  v6[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      *(_BYTE *)(this + 112) = **((_BYTE **)a3 + 1);
      break;
    case 1:
      *(float *)(this + 232) = **((float **)a3 + 1) * 800.0;
      break;
    case 2:
      v4 = *(_DWORD *)(this + 228);
      LODWORD(v6[0]) = **((_DWORD **)a3 + 1);
      HIDWORD(v6[0]) = v4;
      goto LABEL_6;
    case 3:
      v5 = **((_DWORD **)a3 + 1);
      LODWORD(v6[0]) = *(_DWORD *)(this + 224);
      HIDWORD(v6[0]) = v5;
LABEL_6:
      this = Caver::Vector2::Normalize((Caver::Vector2 *)v6);
      *(_QWORD *)(v3 + 224) = v6[0];
      break;
    case 4:
      *(_DWORD *)(this + 268) = **((_DWORD **)a3 + 1);
      break;
    case 5:
      *(_DWORD *)(this + 272) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      *(_DWORD *)(this + 172) = **((_DWORD **)a3 + 1);
      break;
    case 7:
      *(_BYTE *)(this + 237) = **((_BYTE **)a3 + 1);
      break;
    case 8:
      *(_DWORD *)(this + 240) = **((_DWORD **)a3 + 1);
      break;
    default:
      this = Caver::Component::SetValueForBindedProperty((Caver::Component *)this, a2, a3);
      break;
  }
  return this;
}

