/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285DC0
 * Mangled: _ZN5Caver18MagicBombComponent7PrepareEv
 * Demangled: Caver::MagicBombComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000203980  Caver::SpellComponent::Prepare(void)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 30
 *   insn=0x0000000000285DD0 string=0x0000000000285DD4 "U"
 *   insn=0x0000000000285DF0 string=0x00000000001F81D0 "0'"
 *   insn=0x0000000000285DF8 string=0x0000000000285DFC "!0D"
 *   insn=0x0000000000285E08 string=0x0000000000285E0C "h\n@"
 *   insn=0x0000000000285E0C string=0x0000000000285E10 ""
 *   insn=0x0000000000285E10 string=0x0000000000285E14 "h\n"
 *   insn=0x0000000000285E1C string=0x0000000000285E20 " "
 *   insn=0x0000000000285E20 string=0x0000000000285E24 "@"
 *   insn=0x0000000000285E20 string=0x0000000000285E44 "s"
 *   insn=0x0000000000285E24 string=0x0000000000285E28 ""
 *   insn=0x0000000000285E28 string=0x0000000000285E2C ""
 *   insn=0x0000000000285E30 string=0x0000000000285E34 ""
 *   insn=0x0000000000285E34 string=0x0000000000285E38 ""
 *   insn=0x0000000000285E4C string=0x0000000000285E50 "P"
 *   insn=0x0000000000285E68 string=0x0000000000285E6C "B"
 *   insn=0x0000000000285E70 string=0x0000000000285E74 "c"
 *   insn=0x0000000000285E74 string=0x0000000000285E78 "B!"
 *   insn=0x0000000000285E78 string=0x0000000000285E7C ""
 *   insn=0x0000000000285E80 string=0x0000000000285E84 "c!"
 *   insn=0x0000000000285E84 string=0x0000000000285E88 "I"
 *   insn=0x0000000000285E94 string=0x0000000000285E98 "l"
 *   insn=0x0000000000285E98 string=0x0000000000285E9C ""
 *   insn=0x0000000000285E9C string=0x0000000000285EA0 "?"
 *   insn=0x0000000000285EA0 string=0x0000000000285EA4 "-"
 *   insn=0x0000000000285EA4 string=0x0000000000285EA8 ")"
 *   insn=0x0000000000285EB4 string=0x0000000000285EB8 "("
 *   insn=0x0000000000285EC0 string=0x0000000000285EC4 "k"
 *   insn=0x0000000000285EC4 string=0x0000000000285EC8 "("
 *   insn=0x0000000000285EC8 string=0x0000000000285ECC "h"
 *   insn=0x0000000000285EF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBombComponent::Prepare(Caver::SceneObject **this)
{
  __int64 v2; // x0
  Caver::SceneObject *v3; // x19
  Caver::SceneObject *v4; // x0
  int v5; // w8
  unsigned int v6; // s0
  unsigned int v7; // s2
  unsigned int v8; // s3
  unsigned int v9; // s4
  int v10; // w8
  float v11; // s4
  int v12; // w9
  int v13; // w12
  unsigned __int16 v14; // w8
  unsigned __int8 v15; // w9
  char v16; // [xsp+0h] [xbp-30h]
  char v17; // [xsp+1h] [xbp-2Fh]
  char v18; // [xsp+2h] [xbp-2Eh]
  char v19; // [xsp+3h] [xbp-2Dh]

  _ReadStatusReg(TPIDR_EL0);
  Caver::SpellComponent::Prepare((Caver::SpellComponent *)this);
  Caver::SceneObject::SetAlwaysActive(this[5]);
  v2 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ModelComponent::Interface);
  v3 = (Caver::SceneObject *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = this[25];
  this[25] = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 2) - 1;
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = this[25];
    }
  }
  if ( v3 )
  {
    Caver::Color::FromFloatColor();
    LOBYTE(v6) = v16;
    LOBYTE(v7) = v17;
    LOBYTE(v8) = v18;
    LOBYTE(v9) = v19;
    v10 = (int)(float)((float)v6 * 1.5);
    v11 = (float)v9;
    v12 = (int)(float)((float)v7 * 1.5);
    v13 = (int)(float)((float)v8 * 1.5);
    if ( v10 >= 255 )
      LOBYTE(v10) = -1;
    if ( v12 >= 255 )
      LOBYTE(v12) = -1;
    if ( v13 >= 255 )
      LOBYTE(v13) = -1;
    v14 = (unsigned __int8)v10 | ((unsigned __int8)v12 << 8);
    if ( (int)(float)(v11 * 1.5) >= 255 )
      v15 = -1;
    else
      v15 = (int)(float)(v11 * 1.5);
    *(_DWORD *)((char *)v3 + 310) = v14 | ((unsigned __int8)v13 << 16) & 0xFFFFFF | (v15 << 24);
  }
}

