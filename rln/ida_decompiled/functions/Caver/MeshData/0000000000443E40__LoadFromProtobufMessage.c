/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443E40
 * Mangled: _ZN5Caver8MeshData23LoadFromProtobufMessageERKNS_5Proto8MeshDataEPh
 * Demangled: Caver::MeshData::LoadFromProtobufMessage(Caver::Proto::MeshData const&,uchar *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x0000000000443E40 string=0x0000000000443E44 "h"
 *   insn=0x0000000000443E44 string=0x0000000000443E50 "("
 *   insn=0x0000000000443E48 string=0x0000000000443E4C ""
 *   insn=0x0000000000443E4C string=0x0000000000443E68 ""
 *   insn=0x0000000000443E50 string=0x0000000000443E54 "\t"
 *   insn=0x0000000000443E54 string=0x0000000000443E58 "?"
 *   insn=0x0000000000443E5C string=0x0000000000443E6C "(@"
 *   insn=0x0000000000443E60 string=0x0000000000443E64 ""
 *   insn=0x0000000000443E6C string=0x0000000000443E70 "@"
 *   insn=0x0000000000443E70 string=0x0000000000443E74 "($C)?"
 *   insn=0x0000000000443E74 string=0x0000000000443E78 "?"
 *   insn=0x0000000000443E78 string=0x0000000000443E7C "}@"
 *   insn=0x0000000000443E7C string=0x0000000000443E80 "H"
 *   insn=0x0000000000443E84 string=0x0000000000443E88 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshData::LoadFromProtobufMessage(
        __int64 this,
        const Caver::Proto::MeshData *a2,
        unsigned __int8 *a3)
{
  int v3; // w8
  int v4; // w8
  unsigned __int8 *v5; // x8

  if ( (*((_BYTE *)a2 + 28) & 1) != 0 )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 - 1) > 6 )
      goto LABEL_6;
    v3 = v4 + 5119;
  }
  else
  {
    v3 = 0;
  }
  *(_DWORD *)this = v3;
LABEL_6:
  *(_QWORD *)(this + 4) = *((_QWORD *)a2 + 2);
  v5 = &a3[*((int *)a2 + 6)];
  if ( (*((_DWORD *)a2 + 7) & 8) == 0 )
    v5 = 0;
  *(_QWORD *)(this + 16) = v5;
  return this;
}

