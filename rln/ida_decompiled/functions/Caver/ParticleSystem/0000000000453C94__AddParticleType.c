/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453C94
 * Mangled: _ZN5Caver14ParticleSystem15AddParticleTypeERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleE
 * Demangled: Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000203BB0  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9060  Caver::Texture::SharedPtr(void)
 *   0x00000000001FB260  std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 88
 *   insn=0x0000000000453CA4 string=0x0000000000453CA8 "V"
 *   insn=0x0000000000453CC0 string=0x0000000000453CC4 "\t9@"
 *   insn=0x0000000000453CD4 string=0x0000000000453CD8 "h"
 *   insn=0x0000000000453CD4 string=0x00000000001F9060 "0'"
 *   insn=0x0000000000453CDC string=0x0000000000453CE0 ""
 *   insn=0x0000000000453CE8 string=0x0000000000453CEC "\t\t@"
 *   insn=0x0000000000453CE8 string=0x0000000000453CF8 "h"
 *   insn=0x0000000000453CEC string=0x0000000000453CF0 ")"
 *   insn=0x0000000000453CF0 string=0x0000000000453CF4 "\t\t"
 *   insn=0x0000000000453D04 string=0x0000000000453D08 "\t\t@"
 *   insn=0x0000000000453D04 string=0x0000000000453D14 "h"
 *   insn=0x0000000000453D08 string=0x0000000000453D0C ")"
 *   insn=0x0000000000453D0C string=0x0000000000453D10 "\t\t"
 *   insn=0x0000000000453D24 string=0x0000000000453D28 "\t\t@"
 *   insn=0x0000000000453D28 string=0x0000000000453D2C ")"
 *   insn=0x0000000000453D2C string=0x0000000000453D30 "\t\t"
 *   insn=0x0000000000453D38 string=0x0000000000453D3C ""
 *   insn=0x0000000000453D4C string=0x0000000000453D50 "d"
 *   insn=0x0000000000453D50 string=0x0000000000453D54 "!($"
 *   insn=0x0000000000453D5C string=0x0000000000453D60 "C"
 *   insn=0x0000000000453D64 string=0x0000000000453D68 "$"
 *   insn=0x0000000000453D80 string=0x0000000000453D84 "c($"
 *   insn=0x0000000000453D8C string=0x0000000000453D90 "@( "
 *   insn=0x0000000000453DB0 string=0x0000000000453DB4 "\t@"
 *   insn=0x0000000000453DB4 string=0x0000000000453DB8 "k"
 *   insn=0x0000000000453DB8 string=0x0000000000453DBC "\t"
 *   insn=0x0000000000453E2C string=0x0000000000453E30 "i\n"
 *   insn=0x0000000000453E38 string=0x0000000000453E3C ""
 *   insn=0x0000000000453E38 string=0x0000000000453E54 "@"
 *   insn=0x0000000000453E48 string=0x00000000001FB260 "0'"
 *   insn=0x0000000000453E54 string=0x0000000000453E58 ""
 *   insn=0x0000000000453E58 string=0x0000000000453E5C ""
 *   insn=0x0000000000453E60 string=0x0000000000453E64 ""
 *   insn=0x0000000000453E64 string=0x0000000000453E68 ""
 *   insn=0x0000000000453E74 string=0x0000000000453E78 "@"
 *   insn=0x0000000000453E78 string=0x0000000000453E7C ""
 *   insn=0x0000000000453E7C string=0x0000000000453E80 ""
 *   insn=0x0000000000453E84 string=0x0000000000453E88 ""
 *   insn=0x0000000000453E88 string=0x0000000000453E8C ""
 *   insn=0x0000000000453E9C string=0x0000000000453EA0 "a"
 *   insn=0x0000000000453EB0 string=0x0000000000453EB4 "it"
 *   insn=0x0000000000453EB4 string=0x0000000000453EB8 ""
 *   insn=0x0000000000453ECC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000453ED8 string=0x0000000000453F14 "@"
 *   insn=0x0000000000453EE4 string=0x0000000000453EE8 "("
 *   insn=0x0000000000453EE8 string=0x0000000000453EEC "\t\t@"
 *   insn=0x0000000000453EEC string=0x0000000000453EF0 ")"
 *   insn=0x0000000000453EF0 string=0x0000000000453EF4 "\t\t"
 *   insn=0x0000000000453EF8 string=0x0000000000453EFC "\t"
 *   insn=0x0000000000453EFC string=0x0000000000453F00 ")"
 *   insn=0x0000000000453F04 string=0x0000000000453F08 " "
 *   insn=0x0000000000453F14 string=0x0000000000453F18 ""
 *   insn=0x0000000000453F18 string=0x0000000000453F1C ""
 *   insn=0x0000000000453F20 string=0x0000000000453F24 ""
 *   insn=0x0000000000453F24 string=0x0000000000453F28 ""
 *   insn=0x0000000000453F30 string=0x0000000000453F34 "d"
 *   insn=0x0000000000453F38 string=0x0000000000453F3C "\t D)}@"
 *   insn=0x0000000000453F3C string=0x0000000000453F40 "}@"
 *   insn=0x0000000000453F48 string=0x0000000000453F4C ")"
 *   insn=0x0000000000453F50 string=0x0000000000453F54 "\n"
 *   insn=0x0000000000453F54 string=0x0000000000453F58 "j"
 *   insn=0x0000000000453F58 string=0x0000000000453F5C "kt"
 *   insn=0x0000000000453F5C string=0x0000000000453F60 "J"
 *   insn=0x0000000000453F64 string=0x0000000000453F68 "J}?"
 *   insn=0x0000000000453F68 string=0x0000000000453F6C "?"
 *   insn=0x0000000000453F6C string=0x0000000000453F70 "\n"
 *   insn=0x0000000000453F70 string=0x0000000000453F74 "\n"
 *   insn=0x0000000000453F78 string=0x0000000000453F7C ")"
 *   insn=0x0000000000453F7C string=0x0000000000453F80 "\t"
 *   insn=0x0000000000453F80 string=0x0000000000453F84 ")@@"
 *   insn=0x0000000000453F84 string=0x0000000000453F88 "\tA"
 *   insn=0x0000000000453F88 string=0x0000000000453F8C ")"
 *   insn=0x0000000000453F8C string=0x0000000000453F90 "\t"
 *   insn=0x0000000000453F90 string=0x0000000000453F94 ")@A"
 *   insn=0x0000000000453F94 string=0x0000000000453F98 "\tA"
 *   insn=0x0000000000453F98 string=0x0000000000453F9C "),@"
 *   insn=0x0000000000453F9C string=0x0000000000453FA0 "\t-"
 *   insn=0x0000000000453FA0 string=0x0000000000453FA4 " "
 *   insn=0x0000000000453FA8 string=0x0000000000453FAC ")"
 *   insn=0x0000000000453FAC string=0x0000000000453FB0 "\t"
 *   insn=0x0000000000453FB0 string=0x0000000000453FB4 ")@@"
 *   insn=0x0000000000453FB4 string=0x0000000000453FB8 "\tA"
 *   insn=0x0000000000453FB8 string=0x0000000000453FBC ")"
 *   insn=0x0000000000453FBC string=0x0000000000453FC0 "\t"
 *   insn=0x0000000000453FC0 string=0x0000000000453FC4 "$"
 *   insn=0x0000000000453FC4 string=0x0000000000453FC8 "\t"
 *   insn=0x0000000000453FC8 string=0x0000000000453FCC "\n"
 *   insn=0x0000000000453FCC string=0x0000000000453FD0 "\n$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::AddParticleType(__int64 *a1, __int64 *a2, float *a3)
{
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  float v9; // w11
  float v10; // w12
  float v11; // s1
  float v12; // s2
  float v13; // w9
  float v14; // w10
  float v15; // s0
  float v16; // s3
  __int64 v17; // x21
  __int64 v18; // x20
  __int128 v19; // q0
  _DWORD *v20; // x0
  int v21; // w8
  __int64 v22; // x0
  int v23; // w8
  __int64 v25; // [xsp+8h] [xbp-88h] BYREF
  _DWORD *v26; // [xsp+10h] [xbp-80h]
  __int128 v27; // [xsp+18h] [xbp-78h]
  float v28; // [xsp+28h] [xbp-68h]
  float v29; // [xsp+2Ch] [xbp-64h]
  float v30; // [xsp+30h] [xbp-60h]
  float v31; // [xsp+34h] [xbp-5Ch]
  float v32; // [xsp+38h] [xbp-58h]
  float v33; // [xsp+3Ch] [xbp-54h]
  float v34; // [xsp+40h] [xbp-50h]
  float v35; // [xsp+44h] [xbp-4Ch]
  float v36; // [xsp+48h] [xbp-48h]
  float v37; // [xsp+4Ch] [xbp-44h]
  float v38; // [xsp+50h] [xbp-40h]
  unsigned __int64 v39; // [xsp+54h] [xbp-3Ch]
  __int64 v40; // [xsp+5Ch] [xbp-34h]
  float v41; // [xsp+64h] [xbp-2Ch]
  __int64 v42; // [xsp+68h] [xbp-28h]

  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a2;
  if ( *(_QWORD *)(*a2 + 112) )
  {
    Caver::Texture::SharedPtr(&v25, *(Caver::Texture **)(*a2 + 112));
    if ( *a1 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v25 = *a2;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  if ( !*a1 )
  {
LABEL_7:
    v7 = v25;
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    *a1 = v7;
  }
LABEL_10:
  v27 = 0u;
  v26 = 0;
  v8 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v8 + 8);
  v26 = (_DWORD *)v8;
  v9 = *(float *)(v8 + 92);
  v10 = *(float *)(v8 + 96);
  v11 = *(float *)(v8 + 100);
  v12 = *(float *)(v8 + 104);
  v27 = *(_OWORD *)a3;
  v14 = *a3;
  v13 = a3[1];
  v28 = v14;
  v29 = v13;
  v15 = a3[2];
  v31 = v13;
  v32 = v14;
  v30 = v15 + v14;
  v16 = a3[3];
  v36 = v9;
  v37 = v10;
  v38 = v11 + v9;
  v39 = __PAIR64__(LODWORD(v9), LODWORD(v10));
  v33 = v16 + v13;
  v34 = v15 + v14;
  v35 = v16 + v13;
  *(float *)&v40 = v12 + v10;
  *((float *)&v40 + 1) = v11 + v9;
  v41 = v12 + v10;
  v17 = a1[1];
  v18 = a1[2];
  if ( a1[3] == v18 )
  {
    std::vector<Caver::ParticleType>::_M_insert_aux();
    v20 = v26;
    if ( !v26 )
      goto LABEL_18;
  }
  else
  {
    *(_QWORD *)v18 = v8;
    ++*(_DWORD *)(v8 + 8);
    v19 = v27;
    *(float *)(v18 + 24) = v14;
    *(float *)(v18 + 28) = v13;
    *(_OWORD *)(v18 + 8) = v19;
    *(float *)(v18 + 32) = v30;
    *(float *)(v18 + 36) = v31;
    *(float *)(v18 + 40) = v32;
    *(float *)(v18 + 44) = v33;
    *(float *)(v18 + 48) = v34;
    *(float *)(v18 + 52) = v35;
    *(float *)(v18 + 56) = v36;
    *(float *)(v18 + 60) = v37;
    *(float *)(v18 + 64) = v38;
    *(_QWORD *)(v18 + 68) = v39;
    *(_QWORD *)(v18 + 76) = v40;
    *(float *)(v18 + 84) = v41;
    a1[2] = v18 + 88;
    v20 = v26;
    if ( !v26 )
      goto LABEL_18;
  }
  v21 = v20[2] - 1;
  v20[2] = v21;
  if ( !v21 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 8LL))(v20);
LABEL_18:
  v22 = v25;
  if ( v25 )
  {
    v23 = *(_DWORD *)(v25 + 8) - 1;
    *(_DWORD *)(v25 + 8) = v23;
    if ( !v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  }
  return -1171354717 * (unsigned int)((unsigned __int64)(v18 - v17) >> 3);
}

