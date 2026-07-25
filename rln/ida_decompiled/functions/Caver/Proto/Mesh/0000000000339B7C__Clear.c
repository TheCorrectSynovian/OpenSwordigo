/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339B7C
 * Mangled: _ZN5Caver5Proto4Mesh5ClearEv
 * Demangled: Caver::Proto::Mesh::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FE970  Caver::Proto::MeshMaterial::Clear(void)
 *   0x00000000001FF920  Caver::Proto::Box::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 68
 *   insn=0x0000000000339B88 string=0x0000000000339B8C "h"
 *   insn=0x0000000000339B98 string=0x0000000000339B9C "H"
 *   insn=0x0000000000339B9C string=0x0000000000339BA0 "i"
 *   insn=0x0000000000339B9C string=0x0000000000339BC4 "H"
 *   insn=0x0000000000339BA0 string=0x0000000000339BA4 "\t"
 *   insn=0x0000000000339BA4 string=0x0000000000339BA8 "(q@9"
 *   insn=0x0000000000339BAC string=0x0000000000339BBC "?"
 *   insn=0x0000000000339BB4 string=0x0000000000339BB8 " "
 *   insn=0x0000000000339BBC string=0x0000000000339BC0 "h"
 *   insn=0x0000000000339BC4 string=0x0000000000339BC8 "i"
 *   insn=0x0000000000339BC4 string=0x0000000000339BEC "H"
 *   insn=0x0000000000339BC8 string=0x0000000000339BCC "\t"
 *   insn=0x0000000000339BCC string=0x0000000000339BD0 "(q@9"
 *   insn=0x0000000000339BD4 string=0x0000000000339BE4 "?"
 *   insn=0x0000000000339BDC string=0x0000000000339BE0 " "
 *   insn=0x0000000000339BE4 string=0x0000000000339BE8 "h"
 *   insn=0x0000000000339BEC string=0x0000000000339BF0 "i"
 *   insn=0x0000000000339BEC string=0x0000000000339C14 "H"
 *   insn=0x0000000000339BF0 string=0x0000000000339BF4 "\t"
 *   insn=0x0000000000339BF4 string=0x0000000000339BF8 "(q@9"
 *   insn=0x0000000000339BFC string=0x0000000000339C0C "?"
 *   insn=0x0000000000339C04 string=0x0000000000339C08 " "
 *   insn=0x0000000000339C0C string=0x0000000000339C10 "h"
 *   insn=0x0000000000339C14 string=0x0000000000339C18 "i6@"
 *   insn=0x0000000000339C14 string=0x0000000000339C3C "H"
 *   insn=0x0000000000339C18 string=0x0000000000339C1C "\t"
 *   insn=0x0000000000339C1C string=0x0000000000339C20 "(q@9"
 *   insn=0x0000000000339C24 string=0x0000000000339C34 "?"
 *   insn=0x0000000000339C2C string=0x0000000000339C30 " "
 *   insn=0x0000000000339C34 string=0x0000000000339C38 "h"
 *   insn=0x0000000000339C3C string=0x0000000000339C40 "i:@"
 *   insn=0x0000000000339C40 string=0x0000000000339C44 "\t"
 *   insn=0x0000000000339C44 string=0x0000000000339C48 "(q@9"
 *   insn=0x0000000000339C4C string=0x0000000000339C5C "?"
 *   insn=0x0000000000339C54 string=0x0000000000339C58 " "
 *   insn=0x0000000000339C5C string=0x0000000000339C60 "h"
 *   insn=0x0000000000339C68 string=0x0000000000339C6C "H"
 *   insn=0x0000000000339C68 string=0x0000000000339D18 "h:@"
 *   insn=0x0000000000339C6C string=0x0000000000339C70 "i>@"
 *   insn=0x0000000000339C70 string=0x0000000000339C74 "\t"
 *   insn=0x0000000000339C74 string=0x0000000000339C78 "(q@9"
 *   insn=0x0000000000339C7C string=0x0000000000339C8C "?"
 *   insn=0x0000000000339C84 string=0x0000000000339C88 " "
 *   insn=0x0000000000339C8C string=0x0000000000339C90 "h"
 *   insn=0x0000000000339C94 string=0x0000000000339C98 "`B@"
 *   insn=0x0000000000339C98 string=0x0000000000339C9C "`"
 *   insn=0x0000000000339C9C string=0x0000000000339CA0 "4"
 *   insn=0x0000000000339CA0 string=0x0000000000339CA4 "h"
 *   insn=0x0000000000339CA8 string=0x0000000000339CAC "`F@"
 *   insn=0x0000000000339CAC string=0x0000000000339CB0 "`"
 *   insn=0x0000000000339CB0 string=0x0000000000339CB4 ""
 *   insn=0x0000000000339CB4 string=0x0000000000339CB8 "h"
 *   insn=0x0000000000339CBC string=0x0000000000339CC0 "i"
 *   insn=0x0000000000339CBC string=0x0000000000339CEC "h"
 *   insn=0x0000000000339CC0 string=0x0000000000339CC4 "`J@"
 *   insn=0x0000000000339CC4 string=0x0000000000339CC8 ")qE"
 *   insn=0x0000000000339CD0 string=0x0000000000339CD4 ""
 *   insn=0x0000000000339CE4 string=0x0000000000339CE8 "h"
 *   insn=0x0000000000339CEC string=0x0000000000339CF0 "h"
 *   insn=0x0000000000339CF0 string=0x0000000000339CF4 "`N@"
 *   insn=0x0000000000339CF4 string=0x0000000000339CF8 "%F"
 *   insn=0x0000000000339D00 string=0x0000000000339D04 ""
 *   insn=0x0000000000339D1C string=0x0000000000339D20 "k"
 *   insn=0x0000000000339D24 string=0x0000000000339D28 "h"
 *   insn=0x0000000000339D2C string=0x0000000000339D30 ""
 *   insn=0x0000000000339D30 string=0x0000000000339D34 ""
 *   insn=0x0000000000339D38 string=0x0000000000339D3C "h:"
 *   insn=0x0000000000339D44 string=0x0000000000339D48 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x20
  __int64 v10; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 160);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      v3 = *(_QWORD *)(this + 24);
      if ( v3 )
      {
        if ( *(_BYTE *)(v3 + 28) )
          *(_OWORD *)(v3 + 12) = xmmword_58B490;
        *(_DWORD *)(v3 + 28) = 0;
        v2 = *(_DWORD *)(this + 160);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v4 = *(_QWORD *)(this + 32);
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 28) )
          *(_OWORD *)(v4 + 12) = xmmword_58B490;
        *(_DWORD *)(v4 + 28) = 0;
        v2 = *(_DWORD *)(this + 160);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v5 = *(_QWORD *)(this + 40);
      if ( v5 )
      {
        if ( *(_BYTE *)(v5 + 28) )
          *(_OWORD *)(v5 + 12) = xmmword_58B490;
        *(_DWORD *)(v5 + 28) = 0;
        v2 = *(_DWORD *)(this + 160);
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(this + 104);
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 28) )
          *(_OWORD *)(v6 + 12) = xmmword_58B490;
        *(_DWORD *)(v6 + 28) = 0;
        v2 = *(_DWORD *)(this + 160);
      }
    }
    if ( (v2 & 0x80) != 0 )
    {
      v7 = *(_QWORD *)(this + 112);
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 28) )
          *(_OWORD *)(v7 + 12) = xmmword_58B490;
        *(_DWORD *)(v7 + 28) = 0;
        v2 = *(_DWORD *)(this + 160);
      }
    }
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    if ( (v2 & 0x100) != 0 )
    {
      v8 = *(_QWORD *)(this + 120);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 28) )
          *(_OWORD *)(v8 + 12) = xmmword_58B490;
        *(_DWORD *)(v8 + 28) = 0;
        v2 = *(_DWORD *)(this + 160);
      }
    }
    if ( (v2 & 0x200) != 0 )
    {
      this = *(_QWORD *)(this + 128);
      if ( this )
      {
        this = Caver::Proto::MeshMaterial::Clear((Caver::Proto::MeshMaterial *)this);
        v2 = *(_DWORD *)(v1 + 160);
      }
    }
    if ( (v2 & 0x400) != 0 )
    {
      this = *(_QWORD *)(v1 + 136);
      if ( this )
      {
        this = Caver::Proto::Box::Clear((Caver::Proto::Box *)this);
        v2 = *(_DWORD *)(v1 + 160);
      }
    }
    if ( (v2 & 0x800) != 0 )
    {
      this = *(_QWORD *)(v1 + 144);
      if ( (__int64 *)this != &Caver::Proto::Mesh::_default_vertex_data_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 160);
      }
    }
    if ( (v2 & 0x1000) != 0 )
    {
      this = *(_QWORD *)(v1 + 152);
      if ( (__int64 *)this != &Caver::Proto::Mesh::_default_index_data_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  if ( *(int *)(v1 + 56) >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 8 * v9);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      ++v9;
    }
    while ( v9 < *(int *)(v1 + 56) );
  }
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 160) = 0;
  return this;
}

