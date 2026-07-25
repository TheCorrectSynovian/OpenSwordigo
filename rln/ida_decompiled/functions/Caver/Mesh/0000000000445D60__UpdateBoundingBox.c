/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000445D60
 * Mangled: _ZN5Caver4Mesh17UpdateBoundingBoxEv
 * Demangled: Caver::Mesh::UpdateBoundingBox(void)
 *
 * Callers: 1
 *   0x00000000001F6A50  Caver::Mesh::UpdateBoundingBox(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63E0  Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&)
 *
 * Referenced strings: 37
 *   insn=0x0000000000445D70 string=0x0000000000445D74 "U"
 *   insn=0x0000000000445D80 string=0x0000000000445D84 "h"
 *   insn=0x0000000000445D84 string=0x0000000000445D88 ""
 *   insn=0x0000000000445D88 string=0x0000000000445D8C "h&@"
 *   insn=0x0000000000445D88 string=0x0000000000445E08 "h"
 *   insn=0x0000000000445D94 string=0x0000000000445D98 "i\n"
 *   insn=0x0000000000445D98 string=0x0000000000445D9C " "
 *   insn=0x0000000000445D9C string=0x0000000000445DA0 "t"
 *   insn=0x0000000000445DA0 string=0x0000000000445DA4 "iR"
 *   insn=0x0000000000445DB0 string=0x0000000000445DB4 "*"
 *   insn=0x0000000000445DB4 string=0x0000000000445DB8 "k"
 *   insn=0x0000000000445DB8 string=0x0000000000445DBC "h"
 *   insn=0x0000000000445DBC string=0x0000000000445DC0 ""
 *   insn=0x0000000000445DC4 string=0x0000000000445DC8 "h*@"
 *   insn=0x0000000000445DC8 string=0x0000000000445DCC "i"
 *   insn=0x0000000000445DD4 string=0x0000000000445DD8 "}"
 *   insn=0x0000000000445DD8 string=0x0000000000445DDC "("
 *   insn=0x0000000000445DDC string=0x0000000000445DE0 "\t"
 *   insn=0x0000000000445DE4 string=0x0000000000445DE8 "\t@"
 *   insn=0x0000000000445DEC string=0x0000000000445DF0 "|"
 *   insn=0x0000000000445DF0 string=0x0000000000445DF4 "h"
 *   insn=0x0000000000445DF0 string=0x00000000001F63E0 "0'"
 *   insn=0x0000000000445DFC string=0x0000000000445E00 "C"
 *   insn=0x0000000000445E00 string=0x0000000000445E04 ""
 *   insn=0x0000000000445E08 string=0x0000000000445E0C "i2"
 *   insn=0x0000000000445E0C string=0x0000000000445E10 "jR"
 *   insn=0x0000000000445E10 string=0x0000000000445E14 "?"
 *   insn=0x0000000000445E18 string=0x0000000000445E1C "_"
 *   insn=0x0000000000445E28 string=0x0000000000445E2C "!"
 *   insn=0x0000000000445E48 string=0x0000000000445E4C "h"
 *   insn=0x0000000000445E54 string=0x0000000000445E58 "h*@"
 *   insn=0x0000000000445E58 string=0x0000000000445E5C "i"
 *   insn=0x0000000000445E64 string=0x0000000000445E68 "}"
 *   insn=0x0000000000445E68 string=0x0000000000445E6C "(Ih"
 *   insn=0x0000000000445E74 string=0x0000000000445E78 "Z"
 *   insn=0x0000000000445E78 string=0x0000000000445E7C "h"
 *   insn=0x0000000000445E90 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Mesh::UpdateBoundingBox(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  unsigned int v3; // w22
  __int64 *v4; // x8
  unsigned int v5; // w22
  __int64 v6; // x8
  __int64 v7; // [xsp+8h] [xbp-38h] BYREF
  int v8; // [xsp+10h] [xbp-30h]
  __int64 v9; // [xsp+18h] [xbp-28h]

  v1 = this;
  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 272) && (v2 = *(_DWORD *)(this + 36), v2 > 0) )
  {
    *(_OWORD *)(this + 324) = xmmword_594F30;
    *(_QWORD *)(this + 340) = 0xFF7FFFFFFF7FFFFFLL;
    if ( v2 < 3 )
    {
      if ( v2 == 2 && *(_DWORD *)this )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + *(_DWORD *)(v1 + 40) * v5);
          v8 = 0;
          v7 = v6;
          this = Caver::Box::ExpandToIncludePoint((Caver::Box *)(v1 + 324), (const Caver::Vector3 *)&v7);
          ++v5;
        }
        while ( v5 < *(_DWORD *)v1 );
      }
    }
    else if ( *(_DWORD *)this )
    {
      v3 = 0;
      do
      {
        v4 = (__int64 *)(*(_QWORD *)(v1 + 48) + *(_DWORD *)(v1 + 40) * v3);
        v7 = *v4;
        v8 = *((_DWORD *)v4 + 2);
        this = Caver::Box::ExpandToIncludePoint((Caver::Box *)(v1 + 324), (const Caver::Vector3 *)&v7);
        ++v3;
      }
      while ( v3 < *(_DWORD *)v1 );
    }
  }
  else
  {
    *(_QWORD *)(this + 332) = 0;
    *(_QWORD *)(this + 324) = 0;
    *(_QWORD *)(this + 340) = 0;
  }
  return this;
}

