/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287B34
 * Mangled: _ZN5Caver23MagicExplosionComponent9SetDamageENS_10DamageTypeENS_17SpecialDamageTypeEif
 * Demangled: Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Callers: 1
 *   0x00000000002017B0  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F61A0  Caver::Shape::ShapeWithCircle(Caver::Circle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC1F0  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x0000000000203B50  Caver::DamageComponent::DamageComponent(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000287E40  Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 84
 *   insn=0x0000000000287B4C string=0x0000000000287B50 "X"
 *   insn=0x0000000000287B50 string=0x0000000000287B54 ""
 *   insn=0x0000000000287B5C string=0x0000000000287B60 ""
 *   insn=0x0000000000287B74 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000287B80 string=0x0000000000287B84 ""
 *   insn=0x0000000000287B88 string=0x0000000000287B8C "`R@"
 *   insn=0x0000000000287B8C string=0x0000000000287B90 "wR"
 *   insn=0x0000000000287B90 string=0x0000000000287B94 " "
 *   insn=0x0000000000287B94 string=0x0000000000287B98 "@"
 *   insn=0x0000000000287B98 string=0x0000000000287B9C ""
 *   insn=0x0000000000287B9C string=0x0000000000287BA0 ""
 *   insn=0x0000000000287BA4 string=0x0000000000287BA8 ""
 *   insn=0x0000000000287BA8 string=0x0000000000287BAC ""
 *   insn=0x0000000000287BB0 string=0x0000000000287BB4 "wR@"
 *   insn=0x0000000000287BBC string=0x0000000000287BC0 "`"
 *   insn=0x0000000000287BC0 string=0x0000000000287BC4 ""
 *   insn=0x0000000000287BC4 string=0x0000000000287BC8 "%@"
 *   insn=0x0000000000287BD4 string=0x0000000000287BD8 ")"
 *   insn=0x0000000000287BEC string=0x0000000000287BF0 "@"
 *   insn=0x0000000000287BF0 string=0x0000000000287BF4 ""
 *   insn=0x0000000000287BF4 string=0x0000000000287BF8 ""
 *   insn=0x0000000000287BFC string=0x0000000000287C00 ""
 *   insn=0x0000000000287C00 string=0x0000000000287C04 ""
 *   insn=0x0000000000287C0C string=0x0000000000287C10 "t"
 *   insn=0x0000000000287C14 string=0x0000000000287C18 "v"
 *   insn=0x0000000000287C18 string=0x00000000001FC1F0 "0'"
 *   insn=0x0000000000287C1C string=0x0000000000287C20 ""
 *   insn=0x0000000000287C24 string=0x0000000000287C28 "`V@"
 *   insn=0x0000000000287C28 string=0x0000000000287C2C "tV"
 *   insn=0x0000000000287C2C string=0x0000000000287C30 " "
 *   insn=0x0000000000287C30 string=0x0000000000287C34 "@"
 *   insn=0x0000000000287C34 string=0x0000000000287C38 ""
 *   insn=0x0000000000287C38 string=0x0000000000287C3C ""
 *   insn=0x0000000000287C40 string=0x0000000000287C44 ""
 *   insn=0x0000000000287C44 string=0x0000000000287C48 ""
 *   insn=0x0000000000287C4C string=0x0000000000287C50 "tV@"
 *   insn=0x0000000000287C74 string=0x0000000000287C78 "J"
 *   insn=0x0000000000287C78 string=0x00000000001F61A0 "0'"
 *   insn=0x0000000000287C88 string=0x0000000000287C8C "4"
 *   insn=0x0000000000287C8C string=0x0000000000287CD0 "`V@"
 *   insn=0x0000000000287C90 string=0x0000000000287C94 ""
 *   insn=0x0000000000287CA4 string=0x0000000000287CA8 "\t@"
 *   insn=0x0000000000287CB0 string=0x0000000000287CB4 ""
 *   insn=0x0000000000287CC4 string=0x0000000000287CC8 "@"
 *   insn=0x0000000000287CD8 string=0x0000000000287CDC "`"
 *   insn=0x0000000000287CD8 string=0x00000000001FD0F0 "0'"
 *   insn=0x0000000000287CDC string=0x0000000000287CE0 "iV@"
 *   insn=0x0000000000287CE0 string=0x0000000000287CE4 ""
 *   insn=0x0000000000287CE4 string=0x0000000000287CE8 "%@"
 *   insn=0x0000000000287CF0 string=0x0000000000287CF4 "*\t@"
 *   insn=0x0000000000287CF4 string=0x0000000000287CF8 "J"
 *   insn=0x0000000000287CF8 string=0x0000000000287CFC "*\t"
 *   insn=0x0000000000287D0C string=0x0000000000287D10 "@"
 *   insn=0x0000000000287D0C string=0x0000000000287D2C "h"
 *   insn=0x0000000000287D10 string=0x0000000000287D14 ""
 *   insn=0x0000000000287D14 string=0x0000000000287D18 ""
 *   insn=0x0000000000287D1C string=0x0000000000287D20 ""
 *   insn=0x0000000000287D20 string=0x0000000000287D24 ""
 *   insn=0x0000000000287D2C string=0x0000000000287D30 ""
 *   insn=0x0000000000287D3C string=0x0000000000287D5C "]"
 *   insn=0x0000000000287D5C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000287D68 string=0x0000000000287D6C "\t\t@"
 *   insn=0x0000000000287D6C string=0x0000000000287D70 ")"
 *   insn=0x0000000000287D70 string=0x0000000000287D74 "\t\t"
 *   insn=0x0000000000287D74 string=0x0000000000287D78 "A"
 *   insn=0x0000000000287D78 string=0x0000000000287D7C "\t"
 *   insn=0x0000000000287D7C string=0x0000000000287D80 ")"
 *   insn=0x0000000000287D84 string=0x0000000000287D88 " "
 *   insn=0x0000000000287D88 string=0x0000000000287D8C "%"
 *   insn=0x0000000000287D94 string=0x0000000000287D98 "T"
 *   insn=0x0000000000287D9C string=0x0000000000287DA0 ""
 *   insn=0x0000000000287DAC string=0x0000000000287DB0 "\t@"
 *   insn=0x0000000000287DBC string=0x0000000000287DC0 ""
 *   insn=0x0000000000287DCC string=0x0000000000287DD0 "@"
 *   insn=0x0000000000287DE4 string=0x0000000000287DE8 "2"
 *   insn=0x0000000000287DE8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000287DF8 string=0x0000000000287DFC "("
 *   insn=0x0000000000287DFC string=0x0000000000287E00 "\t\t@"
 *   insn=0x0000000000287E00 string=0x0000000000287E04 ")"
 *   insn=0x0000000000287E04 string=0x0000000000287E08 "\t\t"
 *   insn=0x0000000000287E0C string=0x0000000000287E10 "\t"
 *   insn=0x0000000000287E10 string=0x0000000000287E14 ")"
 *   insn=0x0000000000287E18 string=0x0000000000287E1C " "
 *   insn=0x0000000000287E24 string=0x0000000000287E28 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicExplosionComponent::SetDamage(__int64 a1, int a2, int a3, int a4, float a5)
{
  Caver::DamageComponent *v10; // x23
  _DWORD *v11; // x0
  int v12; // w8
  void (*v13)(void); // x8
  __int64 v14; // x0
  int v15; // w8
  __int64 v16; // x20
  _DWORD *v17; // x0
  int v18; // w8
  __int64 v19; // x8
  void (__fastcall *v20)(__int64, _QWORD *); // x21
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x9
  void (__fastcall *v26)(__int64, _QWORD *); // x8
  __int64 result; // x0
  int v28; // w8
  _QWORD v29[2]; // [xsp+10h] [xbp-60h] BYREF
  _QWORD *v30; // [xsp+20h] [xbp-50h]
  __int64 v31; // [xsp+28h] [xbp-48h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10 = (Caver::DamageComponent *)operator new(0xD8u);
  Caver::DamageComponent::DamageComponent(v10);
  ++*((_DWORD *)v10 + 2);
  v11 = *(_DWORD **)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v10;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      v10 = *(Caver::DamageComponent **)(a1 + 160);
    }
  }
  *((_DWORD *)v10 + 45) = a2;
  *((_DWORD *)v10 + 46) = a3;
  *((_DWORD *)v10 + 41) = a4;
  v13 = *(void (**)(void))(**(_QWORD **)(a1 + 40) + 72LL);
  v29[0] = v10;
  if ( v10 )
    ++*((_DWORD *)v10 + 2);
  v13();
  v14 = v29[0];
  if ( v29[0] )
  {
    v15 = *(_DWORD *)(v29[0] + 8LL) - 1;
    *(_DWORD *)(v29[0] + 8LL) = v15;
    if ( !v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v16 = operator new(0x1D0u);
  Caver::CollisionShapeComponent::CollisionShapeComponent((Caver::CollisionShapeComponent *)v16);
  ++*(_DWORD *)(v16 + 8);
  v17 = *(_DWORD **)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v16;
  if ( v17 )
  {
    v18 = v17[2] - 1;
    v17[2] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
      v16 = *(_QWORD *)(a1 + 168);
    }
  }
  v19 = *(_QWORD *)v16;
  *(_BYTE *)(v16 + 381) = 1;
  v20 = *(void (__fastcall **)(__int64, _QWORD *))(v19 + 280);
  Caver::Shape::ShapeWithCircle();
  v20(v16, v29);
  v21 = v30;
  if ( v30 )
  {
    v22 = v30[1] - 1LL;
    v30[1] = v22;
    if ( !v22 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      v23 = v21[2] - 1LL;
      v21[2] = v23;
      if ( !v23 )
        (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
    }
  }
  Caver::CollisionShapeComponent::SetEnabled(*(Caver::CollisionShapeComponent **)(a1 + 168));
  v24 = *(_QWORD *)(a1 + 40);
  v25 = *(_QWORD *)(a1 + 168);
  v26 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 72LL);
  v29[0] = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26(v24, v29);
  result = v29[0];
  if ( v29[0] )
  {
    v28 = *(_DWORD *)(v29[0] + 8LL) - 1;
    *(_DWORD *)(v29[0] + 8LL) = v28;
    if ( !v28 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  *(float *)(a1 + 224) = a5;
  return result;
}

