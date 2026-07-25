/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000214C88
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent6UpdateEf
 * Demangled: Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FDE60  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Callees: 18
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F61A0  Caver::Shape::ShapeWithCircle(Caver::Circle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6930  Caver::ModelComponent::WorldMatrix(void)
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDE60  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x00000000001FE240  Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *   0x00000000001FF5A0  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 94
 *   insn=0x0000000000214C98 string=0x0000000000214C9C "U"
 *   insn=0x0000000000214CA8 string=0x0000000000214CAC "h"
 *   insn=0x0000000000214CB0 string=0x0000000000214CB4 "a"
 *   insn=0x0000000000214CB0 string=0x0000000000214CC8 "t"
 *   insn=0x0000000000214CB8 string=0x0000000000214CBC "a"
 *   insn=0x0000000000214CBC string=0x0000000000214CC0 "`"
 *   insn=0x0000000000214CCC string=0x0000000000214E20 "`B"
 *   insn=0x0000000000214CD0 string=0x0000000000214CD4 "("
 *   insn=0x0000000000214CD4 string=0x0000000000214CD8 "A@9"
 *   insn=0x0000000000214CDC string=0x0000000000214CE0 "`"
 *   insn=0x0000000000214CE4 string=0x0000000000214CE8 "`B"
 *   insn=0x0000000000214CEC string=0x0000000000214CF0 "|"
 *   insn=0x0000000000214CF0 string=0x0000000000214CF4 "`"
 *   insn=0x0000000000214CF0 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000214CF8 string=0x0000000000214CFC ""
 *   insn=0x0000000000214CFC string=0x0000000000214D00 "h"
 *   insn=0x0000000000214CFC string=0x00000000001F6930 "0'"
 *   insn=0x0000000000214D0C string=0x0000000000214D10 "`"
 *   insn=0x0000000000214D10 string=0x0000000000214D14 "h"
 *   insn=0x0000000000214D14 string=0x0000000000214D18 "AB9h"
 *   insn=0x0000000000214D18 string=0x0000000000214D1C "h"
 *   insn=0x0000000000214D1C string=0x0000000000214D20 "h"
 *   insn=0x0000000000214D1C string=0x0000000000214D68 "hr@"
 *   insn=0x0000000000214D20 string=0x0000000000214D24 "i"
 *   insn=0x0000000000214D24 string=0x0000000000214D28 "j"
 *   insn=0x0000000000214D28 string=0x0000000000214D2C "k"
 *   insn=0x0000000000214D30 string=0x0000000000214D34 "!"
 *   insn=0x0000000000214D34 string=0x0000000000214D38 "B"
 *   insn=0x0000000000214D38 string=0x0000000000214D3C "c"
 *   insn=0x0000000000214D50 string=0x0000000000214D54 "O"
 *   insn=0x0000000000214D6C string=0x0000000000214D70 "!"
 *   insn=0x0000000000214D70 string=0x0000000000214D74 "h>@"
 *   insn=0x0000000000214D80 string=0x0000000000214D84 "\t\t@"
 *   insn=0x0000000000214D84 string=0x0000000000214D88 ""
 *   insn=0x0000000000214D98 string=0x0000000000214D9C "}"
 *   insn=0x0000000000214DA4 string=0x0000000000214DA8 "\n"
 *   insn=0x0000000000214DA8 string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000214DBC string=0x00000000001F61A0 "0'"
 *   insn=0x0000000000214DCC string=0x0000000000214DD0 "4"
 *   insn=0x0000000000214DD4 string=0x0000000000214DD8 ""
 *   insn=0x0000000000214DE8 string=0x0000000000214DEC "\t@"
 *   insn=0x0000000000214DF4 string=0x0000000000214DF8 ""
 *   insn=0x0000000000214E08 string=0x0000000000214E0C "@"
 *   insn=0x0000000000214E14 string=0x0000000000214E18 "h"
 *   insn=0x0000000000214E24 string=0x0000000000214E28 "."
 *   insn=0x0000000000214E28 string=0x0000000000214E2C "t"
 *   insn=0x0000000000214E30 string=0x0000000000214E34 "("
 *   insn=0x0000000000214E3C string=0x0000000000214E40 "!@"
 *   insn=0x0000000000214E48 string=0x0000000000214E4C "A@9"
 *   insn=0x0000000000214E78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000214E80 string=0x0000000000214E84 "4"
 *   insn=0x0000000000214E88 string=0x0000000000214E8C ""
 *   insn=0x0000000000214E98 string=0x0000000000214E9C "\t@"
 *   insn=0x0000000000214EA8 string=0x0000000000214EAC ""
 *   insn=0x0000000000214EB8 string=0x0000000000214EBC "@"
 *   insn=0x0000000000214EC8 string=0x0000000000214ECC "~"
 *   insn=0x0000000000214EE4 string=0x0000000000214EE8 "V"
 *   insn=0x0000000000214F00 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000214F24 string=0x0000000000214F28 ")"
 *   insn=0x0000000000214F34 string=0x0000000000214F38 "(A"
 *   insn=0x0000000000214F3C string=0x0000000000214F40 ""
 *   insn=0x0000000000214F64 string=0x0000000000214F68 ")"
 *   insn=0x0000000000214F6C string=0x0000000000214F70 "j"
 *   insn=0x0000000000214F70 string=0x0000000000214F74 "h"
 *   insn=0x0000000000214F74 string=0x0000000000214F78 "!"
 *   insn=0x0000000000214F7C string=0x0000000000214F80 "\t@"
 *   insn=0x0000000000214F8C string=0x0000000000214F90 ""
 *   insn=0x0000000000214F94 string=0x0000000000214F98 "!"
 *   insn=0x0000000000214F9C string=0x0000000000214FA0 "@"
 *   insn=0x0000000000214FB0 string=0x0000000000214FB4 "i"
 *   insn=0x0000000000214FB4 string=0x0000000000214FB8 "h"
 *   insn=0x0000000000214FBC string=0x0000000000214FC0 "3"
 *   insn=0x0000000000214FC0 string=0x0000000000214FC4 "h"
 *   insn=0x0000000000214FC4 string=0x0000000000214FC8 ""
 *   insn=0x0000000000214FC8 string=0x0000000000214FCC "h"
 *   insn=0x0000000000214FD0 string=0x0000000000214FD4 "h"
 *   insn=0x0000000000214FD8 string=0x0000000000214FDC "\t@"
 *   insn=0x0000000000214FE0 string=0x0000000000214FE4 "h\n@"
 *   insn=0x0000000000214FE4 string=0x0000000000214FE8 ""
 *   insn=0x0000000000214FE8 string=0x0000000000214FEC "h\n"
 *   insn=0x0000000000214FF0 string=0x0000000000214FF4 "h"
 *   insn=0x0000000000214FF8 string=0x0000000000214FFC "@"
 *   insn=0x0000000000215030 string=0x0000000000215034 "4"
 *   insn=0x0000000000215038 string=0x000000000021503C ""
 *   insn=0x0000000000215048 string=0x000000000021504C "\t@"
 *   insn=0x0000000000215058 string=0x000000000021505C ""
 *   insn=0x0000000000215068 string=0x000000000021506C "@"
 *   insn=0x0000000000215080 string=0x0000000000215084 "W}"
 *   insn=0x0000000000215084 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000021508C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000215094 string=0x0000000000215098 ">"
 *   insn=0x0000000000215098 string=0x00000000001FD590 "0'"
 *   insn=0x00000000002150A4 string=0x00000000002150A8 "n"
 *   insn=0x00000000002150A8 string=0x00000000001FDE60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::BoneControlledCollisionShapeComponent::Update(_QWORD *this, long double a2)
{
  _QWORD *v2; // x19
  _QWORD *v3; // x20
  __int64 v4; // x8
  Caver::ModelComponent *v5; // x0
  _DWORD *v6; // x8
  int v7; // w9
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  float v11[4]; // [xsp+48h] [xbp-160h] BYREF
  __int64 v12; // [xsp+58h] [xbp-150h] BYREF
  int v13; // [xsp+60h] [xbp-148h]
  __int64 v14; // [xsp+68h] [xbp-140h]
  int v15; // [xsp+70h] [xbp-138h]
  _OWORD v16[4]; // [xsp+78h] [xbp-130h] BYREF
  __int128 v17; // [xsp+B8h] [xbp-F0h] BYREF
  __int128 v18; // [xsp+C8h] [xbp-E0h]
  __int128 v19; // [xsp+D8h] [xbp-D0h]
  __int128 v20; // [xsp+E8h] [xbp-C0h]
  float v21[16]; // [xsp+F8h] [xbp-B0h] BYREF
  _OWORD v22[4]; // [xsp+138h] [xbp-70h] BYREF
  __int64 v23; // [xsp+180h] [xbp-28h]

  v2 = this;
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !this[62] )
  {
    this = (_QWORD *)Caver::BoneControlledCollisionShapeComponent::BoneForName((Caver::Component *)this);
    v2[62] = this;
    if ( !this )
      return this;
  }
  v3 = (_QWORD *)v2[60];
  if ( v3 )
  {
    v4 = v3[17];
    if ( v4 )
      goto LABEL_5;
LABEL_17:
    this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, long double))(*v3 + 64LL))(v3, a2);
    if ( !*(_BYTE *)(v3[17] + 16LL) )
      return this;
    goto LABEL_6;
  }
  this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(v2 + 58),
                     (const Caver::Component *)v2);
  v3 = (_QWORD *)v2[60];
  v4 = v3[17];
  if ( !v4 )
    goto LABEL_17;
LABEL_5:
  if ( !*(_BYTE *)(v4 + 16) )
    return this;
LABEL_6:
  v5 = (Caver::ModelComponent *)v2[60];
  if ( !v5 )
  {
    Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 58), (const Caver::Component *)v2);
    v5 = (Caver::ModelComponent *)v2[60];
  }
  Caver::ModelComponent::WorldMatrix(v5);
  this = (_QWORD *)C_Matrix4Mul(v21, (const float *)(v2[62] + 92LL), (float *)v22);
  if ( *(_BYTE *)(v2[5] + 144LL) )
  {
    v16[0] = xmmword_5837D0;
    v16[1] = xmmword_5837E0;
    v16[2] = xmmword_5837F0;
    v16[3] = xmmword_583800;
    this = (_QWORD *)C_Matrix4Mul((const float *)v16, (const float *)v22, (float *)&v17);
    v22[0] = v17;
    v22[1] = v18;
    v22[2] = v19;
    v22[3] = v20;
  }
  if ( *((_DWORD *)v2 + 28) == 2 )
  {
    v6 = (_DWORD *)v2[15];
    v7 = v6[2];
    LODWORD(v6) = *v6;
    v11[2] = 0.0;
    v11[3] = 1.0;
    v15 = v7;
    LODWORD(v11[0]) = (_DWORD)v6;
    v11[1] = 0.0;
    C_Matrix4Vector4Mul((const float *)v22, v11, (float *)&v17);
    Caver::Vector3::Vector3((Caver::Vector3 *)&v12, (const Caver::Vector4 *)&v17);
    v14 = v12;
    Caver::Shape::ShapeWithCircle();
    this = (_QWORD *)Caver::CollisionShapeComponent::SetUpdatedShape(
                       (Caver::CollisionShapeComponent *)v2,
                       (const Caver::Shape *)&v17);
    v8 = (_QWORD *)v18;
    if ( (_QWORD)v18 )
    {
      v9 = *(_QWORD *)(v18 + 8) - 1LL;
      *(_QWORD *)(v18 + 8) = v9;
      if ( !v9 )
      {
        this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v10 = v8[2] - 1LL;
        v8[2] = v10;
        if ( !v10 )
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    *((_DWORD *)v2 + 126) = v13;
  }
  return this;
}

