/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C4F40
 * Mangled: _ZN5Caver24SwingableWeaponComponent16SetGlowIntensityEf
 * Demangled: Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *
 * Callers: 1
 *   0x00000000001FED20  Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x0000000000201620  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Referenced strings: 70
 *   insn=0x00000000002C4F50 string=0x00000000002C4F54 "h"
 *   insn=0x00000000002C4F54 string=0x00000000002C4F58 ""
 *   insn=0x00000000002C4F5C string=0x00000000002C4F60 "h"
 *   insn=0x00000000002C4F5C string=0x00000000002C4FD4 "`"
 *   insn=0x00000000002C4F64 string=0x00000000002C4F68 "`"
 *   insn=0x00000000002C4F64 string=0x00000000002C4F7C "\t\t@"
 *   insn=0x00000000002C4F70 string=0x00000000002C4F74 "h"
 *   insn=0x00000000002C4F70 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C4F78 string=0x00000000002C4F88 "`"
 *   insn=0x00000000002C4F7C string=0x00000000002C4F80 ")"
 *   insn=0x00000000002C4F80 string=0x00000000002C4F84 "\t\t"
 *   insn=0x00000000002C4F88 string=0x00000000002C4F8C "h"
 *   insn=0x00000000002C4F8C string=0x00000000002C4F90 " "
 *   insn=0x00000000002C4F90 string=0x00000000002C4F94 "\t@"
 *   insn=0x00000000002C4F94 string=0x00000000002C4F98 ")"
 *   insn=0x00000000002C4F98 string=0x00000000002C4F9C "\t"
 *   insn=0x00000000002C4FA0 string=0x00000000002C4FA4 ""
 *   insn=0x00000000002C4FA4 string=0x00000000002C4FA8 ""
 *   insn=0x00000000002C4FAC string=0x00000000002C4FB0 "h"
 *   insn=0x00000000002C4FB4 string=0x00000000002C4FB8 " 5G"
 *   insn=0x00000000002C4FB4 string=0x0000000000583734 "o"
 *   insn=0x00000000002C4FCC string=0x00000000002C4FD0 "h"
 *   insn=0x00000000002C4FD4 string=0x00000000002C4FD8 "a"
 *   insn=0x00000000002C4FD8 string=0x00000000002C4FDC "h"
 *   insn=0x00000000002C4FDC string=0x00000000002C4FE0 "!8 "
 *   insn=0x00000000002C4FE0 string=0x00000000002C4FE4 "!("
 *   insn=0x00000000002C4FE8 string=0x00000000002C4FEC "`"
 *   insn=0x00000000002C4FF0 string=0x00000000002C4FF4 "h"
 *   insn=0x00000000002C4FF8 string=0x00000000002C4FFC "`"
 *   insn=0x00000000002C4FF8 string=0x00000000002C5010 "\t\t@"
 *   insn=0x00000000002C5004 string=0x00000000002C5008 "h"
 *   insn=0x00000000002C500C string=0x00000000002C501C "`"
 *   insn=0x00000000002C5010 string=0x00000000002C5014 ")"
 *   insn=0x00000000002C5014 string=0x00000000002C5018 "\t\t"
 *   insn=0x00000000002C501C string=0x00000000002C5020 "h"
 *   insn=0x00000000002C5020 string=0x00000000002C5024 " "
 *   insn=0x00000000002C5024 string=0x00000000002C5028 "\t@"
 *   insn=0x00000000002C5024 string=0x00000000002C5048 "H"
 *   insn=0x00000000002C5028 string=0x00000000002C502C ")"
 *   insn=0x00000000002C502C string=0x00000000002C5030 "\t"
 *   insn=0x00000000002C5034 string=0x00000000002C5038 ""
 *   insn=0x00000000002C5038 string=0x00000000002C503C ""
 *   insn=0x00000000002C5040 string=0x00000000002C5044 "h"
 *   insn=0x00000000002C5048 string=0x00000000002C5070 "hz@"
 *   insn=0x00000000002C504C string=0x00000000002C5050 ""
 *   insn=0x00000000002C505C string=0x00000000002C5060 "i"
 *   insn=0x00000000002C505C string=0x00000000002C50CC "h"
 *   insn=0x00000000002C5068 string=0x00000000002C506C "\t"
 *   insn=0x00000000002C5074 string=0x00000000002C5078 "`"
 *   insn=0x00000000002C5074 string=0x00000000002C508C "}"
 *   insn=0x00000000002C5080 string=0x00000000002C5084 "hz@"
 *   insn=0x00000000002C5084 string=0x00000000002C5088 "H"
 *   insn=0x00000000002C5088 string=0x00000000002C5090 "hn@"
 *   insn=0x00000000002C5094 string=0x00000000002C5098 "`""
 *   insn=0x00000000002C50A0 string=0x00000000002C50A4 "hn@"
 *   insn=0x00000000002C50B0 string=0x00000000002C50B4 " ( "
 *   insn=0x00000000002C50D0 string=0x00000000002C50D4 "`"
 *   insn=0x00000000002C50D0 string=0x00000000002C50E8 "\t\t@"
 *   insn=0x00000000002C50DC string=0x00000000002C50E0 "h"
 *   insn=0x00000000002C50E4 string=0x00000000002C50F4 "`"
 *   insn=0x00000000002C50E8 string=0x00000000002C50EC ")"
 *   insn=0x00000000002C50EC string=0x00000000002C50F0 "\t\t"
 *   insn=0x00000000002C50F4 string=0x00000000002C50F8 "h"
 *   insn=0x00000000002C50F8 string=0x00000000002C50FC " "
 *   insn=0x00000000002C50FC string=0x00000000002C5100 "\t@"
 *   insn=0x00000000002C5100 string=0x00000000002C5104 ")"
 *   insn=0x00000000002C5104 string=0x00000000002C5108 "\t"
 *   insn=0x00000000002C510C string=0x00000000002C5110 ""
 *   insn=0x00000000002C5110 string=0x00000000002C5114 ""
 *   insn=0x00000000002C5118 string=0x00000000002C511C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::SetGlowIntensity(__int64 this, float a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  int v5; // w9
  float v6; // s0
  float v7; // s1
  int v8; // w9
  int v9; // w9
  __int64 v10; // x8
  __int64 v11; // x8

  v2 = this;
  v3 = *(_QWORD *)(this + 360);
  if ( !v3 )
  {
    v3 = *(_QWORD *)(this + 264);
    if ( v3
      || (Caver::ComponentOutletBase::Connect(
            (Caver::ComponentOutletBase *)(this + 248),
            (const Caver::Component *)this),
          (v3 = *(_QWORD *)(v2 + 264)) != 0) )
    {
      ++*(_DWORD *)(v3 + 8);
    }
    this = *(_QWORD *)(v2 + 360);
    *(_QWORD *)(v2 + 360) = v3;
    if ( this )
    {
      v5 = *(_DWORD *)(this + 8) - 1;
      *(_DWORD *)(this + 8) = v5;
      if ( !v5 )
      {
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
        v3 = *(_QWORD *)(v2 + 360);
      }
    }
    if ( a2 > 0.001 && !v3 )
    {
      this = Caver::SwingableWeaponComponent::CreateGlowObject((Caver::SwingableWeaponComponent *)v2);
      v3 = *(_QWORD *)(v2 + 360);
    }
  }
  v6 = *(float *)(v2 + 412);
  v7 = *(float *)(v2 + 416);
  *(float *)(v2 + 420) = a2;
  *(float *)(v2 + 440) = v6 + (float)((float)(v7 - v6) * a2);
  if ( v3 )
    goto LABEL_19;
  v3 = *(_QWORD *)(v2 + 264);
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 248), (const Caver::Component *)v2),
        (v3 = *(_QWORD *)(v2 + 264)) != 0) )
  {
    ++*(_DWORD *)(v3 + 8);
  }
  this = *(_QWORD *)(v2 + 360);
  *(_QWORD *)(v2 + 360) = v3;
  if ( this )
  {
    v8 = *(_DWORD *)(this + 8) - 1;
    *(_DWORD *)(this + 8) = v8;
    if ( !v8 )
    {
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
      v3 = *(_QWORD *)(v2 + 360);
    }
  }
  if ( v3 )
  {
LABEL_19:
    *(float *)(v3 + 236) = a2;
    *(_BYTE *)(v3 + 112) = 1;
    *(_BYTE *)(v3 + 160) = 1;
    v9 = *(_DWORD *)(v2 + 440);
    *(_BYTE *)(v3 + 112) = 1;
    *(_BYTE *)(v3 + 160) = 1;
    *(_DWORD *)(v3 + 240) = v9;
  }
  v10 = *(_QWORD *)(v2 + 240);
  if ( v10
    || (this = Caver::ComponentOutletBase::Connect(
                 (Caver::ComponentOutletBase *)(v2 + 224),
                 (const Caver::Component *)v2),
        (v10 = *(_QWORD *)(v2 + 240)) != 0) )
  {
    *(float *)(v10 + 124) = a2;
  }
  v11 = *(_QWORD *)(v2 + 216);
  if ( v11
    || (this = Caver::ComponentOutletBase::Connect(
                 (Caver::ComponentOutletBase *)(v2 + 200),
                 (const Caver::Component *)v2),
        (v11 = *(_QWORD *)(v2 + 216)) != 0) )
  {
    *(float *)(v11 + 124) = (float)(a2 * 0.5) + 0.5;
  }
  return this;
}

