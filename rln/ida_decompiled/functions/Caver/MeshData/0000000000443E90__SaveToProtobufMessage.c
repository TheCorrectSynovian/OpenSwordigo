/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443E90
 * Mangled: _ZNK5Caver8MeshData21SaveToProtobufMessageEPNS_5Proto8MeshDataEPh
 * Demangled: Caver::MeshData::SaveToProtobufMessage(Caver::Proto::MeshData *,uchar *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x0000000000443E94 string=0x0000000000443E98 "\t"
 *   insn=0x0000000000443E98 string=0x0000000000443E9C "?"
 *   insn=0x0000000000443EA0 string=0x0000000000443EA4 ")"
 *   insn=0x0000000000443EA0 string=0x0000000000443EC0 "("
 *   insn=0x0000000000443EA8 string=0x0000000000443EAC "\n"
 *   insn=0x0000000000443EAC string=0x0000000000443EB0 "*"
 *   insn=0x0000000000443EB0 string=0x0000000000443EB4 "("
 *   insn=0x0000000000443EB4 string=0x0000000000443EB8 "("
 *   insn=0x0000000000443EBC string=0x0000000000443EC4 "\t"
 *   insn=0x0000000000443EC4 string=0x0000000000443EC8 "\n"
 *   insn=0x0000000000443EC8 string=0x0000000000443ECC "*"
 *   insn=0x0000000000443ECC string=0x0000000000443ED0 "\n"
 *   insn=0x0000000000443ED0 string=0x0000000000443ED4 ")"
 *   insn=0x0000000000443ED4 string=0x0000000000443ED8 "\t@"
 *   insn=0x0000000000443ED8 string=0x0000000000443EDC "*"
 *   insn=0x0000000000443EDC string=0x0000000000443EE0 ")"
 *   insn=0x0000000000443EE4 string=0x0000000000443EE8 "\t@"
 *   insn=0x0000000000443EE4 string=0x0000000000443EF8 "\t@"
 *   insn=0x0000000000443EEC string=0x0000000000443EF0 ")"
 *   insn=0x0000000000443EF4 string=0x0000000000443EFC "\t"
 *   insn=0x0000000000443EFC string=0x0000000000443F00 ") "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshData::SaveToProtobufMessage(
        __int64 this,
        Caver::Proto::MeshData *a2,
        unsigned __int8 *a3)
{
  int v3; // w9
  int v4; // w8
  int v5; // w9
  int v6; // w9
  __int64 v7; // x9

  if ( (unsigned int)(*(_DWORD *)this - 5120) >= 7 )
  {
    v4 = *((_DWORD *)a2 + 7);
  }
  else
  {
    v3 = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 3) = *(_DWORD *)this - 5119;
    v4 = v3 | 1;
    *((_DWORD *)a2 + 7) = v3 | 1;
  }
  v5 = *(_DWORD *)(this + 4);
  *((_DWORD *)a2 + 7) = v4 | 2;
  *((_DWORD *)a2 + 4) = v5;
  v6 = *(_DWORD *)(this + 8);
  *((_DWORD *)a2 + 7) = v4 | 6;
  *((_DWORD *)a2 + 5) = v6;
  if ( a3 )
  {
    v7 = *(_QWORD *)(this + 16);
    if ( !v7 )
      return this;
    LODWORD(v7) = v7 - (_DWORD)a3;
  }
  else
  {
    v7 = *(_QWORD *)(this + 16);
  }
  *((_DWORD *)a2 + 6) = v7;
  *((_DWORD *)a2 + 7) = v4 | 0xE;
  return this;
}

