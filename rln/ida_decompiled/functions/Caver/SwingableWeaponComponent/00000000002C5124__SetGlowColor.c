/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5124
 * Mangled: _ZN5Caver24SwingableWeaponComponent12SetGlowColorENS_10FloatColorE
 * Demangled: Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *
 * Callers: 1
 *   0x00000000001F4950  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *
 * Callees: 4
 *   0x00000000001F37E0  Caver::WeaponGlowComponent::SetColor(Caver::FloatColor const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 31
 *   insn=0x00000000002C5134 string=0x00000000002C5138 "U"
 *   insn=0x00000000002C5148 string=0x00000000002C514C " "
 *   insn=0x00000000002C514C string=0x00000000002C5150 "`"
 *   insn=0x00000000002C5160 string=0x00000000002C5178 "@"
 *   insn=0x00000000002C5168 string=0x00000000002C516C "]"
 *   insn=0x00000000002C516C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C5178 string=0x00000000002C517C ""
 *   insn=0x00000000002C517C string=0x00000000002C5180 ""
 *   insn=0x00000000002C5188 string=0x00000000002C518C "H"
 *   insn=0x00000000002C518C string=0x00000000002C5190 "\t\t@"
 *   insn=0x00000000002C518C string=0x00000000002C51B4 "`"
 *   insn=0x00000000002C5190 string=0x00000000002C5194 ")"
 *   insn=0x00000000002C5194 string=0x00000000002C5198 "\t\t"
 *   insn=0x00000000002C519C string=0x00000000002C51A0 "\t"
 *   insn=0x00000000002C51A4 string=0x00000000002C51A8 ")"
 *   insn=0x00000000002C51A8 string=0x00000000002C51AC " "
 *   insn=0x00000000002C51BC string=0x00000000001F37E0 "P'"
 *   insn=0x00000000002C51CC string=0x00000000002C51D0 "D"
 *   insn=0x00000000002C51D4 string=0x00000000002C51D8 "6"
 *   insn=0x00000000002C51E0 string=0x00000000002C51E4 "k"
 *   insn=0x00000000002C5204 string=0x00000000002C5208 "!"
 *   insn=0x00000000002C5208 string=0x00000000002C520C "B"
 *   insn=0x00000000002C520C string=0x00000000002C5210 "c"
 *   insn=0x00000000002C5214 string=0x00000000002C5218 "!"
 *   insn=0x00000000002C5218 string=0x00000000002C521C "B"
 *   insn=0x00000000002C521C string=0x00000000002C5220 "c"
 *   insn=0x00000000002C5228 string=0x00000000002C522C " %"
 *   insn=0x00000000002C523C string=0x00000000002C5240 "E&"
 *   insn=0x00000000002C5240 string=0x00000000002C5244 "a!"
 *   insn=0x00000000002C524C string=0x00000000002C5250 "P"
 *   insn=0x00000000002C5280 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponComponent::SetGlowColor(__int64 a1, _OWORD *a2)
{
  __int64 v3; // x0
  _DWORD *v4; // x8
  int v5; // w9
  __int64 v6; // x22
  unsigned int v7; // s0
  unsigned int v8; // s1
  unsigned int v9; // s2
  unsigned int v10; // s3
  char v11; // [xsp+8h] [xbp-48h]
  char v12; // [xsp+9h] [xbp-47h]
  char v13; // [xsp+Ah] [xbp-46h]
  char v14; // [xsp+Bh] [xbp-45h]
  int v15; // [xsp+24h] [xbp-2Ch]

  _ReadStatusReg(TPIDR_EL0);
  *(_OWORD *)(a1 + 424) = *a2;
  if ( *(_QWORD *)(a1 + 360) )
    goto LABEL_9;
  v3 = *(_QWORD *)(a1 + 264);
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(a1 + 248), (const Caver::Component *)a1),
        (v3 = *(_QWORD *)(a1 + 264)) != 0) )
  {
    ++*(_DWORD *)(v3 + 8);
  }
  v4 = *(_DWORD **)(a1 + 360);
  *(_QWORD *)(a1 + 360) = v3;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v4 + 8LL))(v4, v4);
      v3 = *(_QWORD *)(a1 + 360);
    }
  }
  if ( v3 )
LABEL_9:
    Caver::WeaponGlowComponent::SetColor();
  v6 = *(_QWORD *)(a1 + 240);
  if ( v6
    || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(a1 + 224), (const Caver::Component *)a1),
        (v6 = *(_QWORD *)(a1 + 240)) != 0) )
  {
    Caver::Color::FromFloatColor();
    LOBYTE(v7) = v11;
    LOBYTE(v8) = v12;
    LOBYTE(v9) = v13;
    LOBYTE(v10) = v14;
    *(float *)(v6 + 176) = (float)v7 / 255.0;
    *(float *)(v6 + 180) = (float)v8 / 255.0;
    *(float *)(v6 + 184) = (float)v9 / 255.0;
    *(float *)(v6 + 188) = (float)v10 / 255.0;
    Caver::Color::FromFloatColor();
    *(_DWORD *)(v6 + 120) = v15;
  }
}

