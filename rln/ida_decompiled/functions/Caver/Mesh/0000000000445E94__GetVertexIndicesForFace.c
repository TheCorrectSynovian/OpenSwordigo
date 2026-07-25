/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000445E94
 * Mangled: _ZN5Caver4Mesh23GetVertexIndicesForFaceEiPi
 * Demangled: Caver::Mesh::GetVertexIndicesForFace(int,int *)
 *
 * Callers: 1
 *   0x0000000000201DF0  Caver::Mesh::GetVertexIndicesForFace(int,int *)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000445E94 string=0x0000000000445E98 ""
 *   insn=0x0000000000445E98 string=0x0000000000445E9C "\n"
 *   insn=0x0000000000445E9C string=0x0000000000445EA0 "H}@"
 *   insn=0x0000000000445EA0 string=0x0000000000445EA4 "\t"
 *   insn=0x0000000000445EA4 string=0x0000000000445EA8 "\t"
 *   insn=0x0000000000445EA8 string=0x0000000000445EAC "k"
 *   insn=0x0000000000445EAC string=0x0000000000445EF8 "J$"
 *   insn=0x0000000000445EB0 string=0x0000000000445EB4 "m"
 *   insn=0x0000000000445EBC string=0x0000000000445EC0 "-"
 *   insn=0x0000000000445EC8 string=0x0000000000445ECC "jij8iii8hih8"
 *   insn=0x0000000000445ECC string=0x0000000000445ED0 "iii8hih8"
 *   insn=0x0000000000445ED0 string=0x0000000000445ED4 "hih8"
 *   insn=0x0000000000445ED4 string=0x0000000000445ED8 ""
 *   insn=0x0000000000445EE8 string=0x0000000000445EEC "jIjxiIixhIhxJ$"
 *   insn=0x0000000000445EEC string=0x0000000000445EF0 "iIixhIhxJ$"
 *   insn=0x0000000000445EF0 string=0x0000000000445EF4 "hIhxJ$"
 *   insn=0x0000000000445EF8 string=0x0000000000445EFC "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Mesh::GetVertexIndicesForFace(__int64 this, int a2, int *a3)
{
  __int64 v3; // x11
  int v4; // w10
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w12
  int v8; // w12

  v3 = *(_QWORD *)(this + 24);
  v4 = 3 * a2;
  v5 = 3 * a2 + 1LL;
  v6 = 3 * a2 + 2LL;
  if ( v3 )
  {
    v7 = *(_DWORD *)(this + 8);
    if ( v7 == 5123 )
    {
      v8 = *(_DWORD *)(this + 16);
      v4 = *(unsigned __int16 *)(v3 + (unsigned int)(v8 * v4));
      LODWORD(v5) = *(unsigned __int16 *)(v3 + (unsigned int)(v8 * v5));
      LODWORD(v6) = *(unsigned __int16 *)(v3 + (unsigned int)(v8 * v6));
    }
    else if ( v7 == 5121 )
    {
      v4 = *(unsigned __int8 *)(v3 + 3LL * a2);
      LODWORD(v5) = *(unsigned __int8 *)(v3 + v5);
      LODWORD(v6) = *(unsigned __int8 *)(v3 + v6);
    }
  }
  *a3 = v4;
  a3[1] = v5;
  a3[2] = v6;
  return this;
}

