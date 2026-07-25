/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000445CB8
 * Mangled: _ZN5Caver4Mesh16NormalizeNormalsEv
 * Demangled: Caver::Mesh::NormalizeNormals(void)
 *
 * Callers: 1
 *   0x00000000001F6A90  Caver::Mesh::NormalizeNormals(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 10
 *   insn=0x0000000000445CC8 string=0x0000000000445CCC "T"
 *   insn=0x0000000000445CD8 string=0x0000000000445CDC "h>@"
 *   insn=0x0000000000445CE4 string=0x0000000000445CE8 "h"
 *   insn=0x0000000000445CE8 string=0x0000000000445CEC "h"
 *   insn=0x0000000000445CEC string=0x0000000000445CF0 "u&@"
 *   insn=0x0000000000445D20 string=0x0000000000445D24 "h"
 *   insn=0x0000000000445D24 string=0x0000000000445D28 "iB@"
 *   insn=0x0000000000445D30 string=0x0000000000445D34 "#"
 *   insn=0x0000000000445D44 string=0x0000000000445D5C "]"
 *   insn=0x0000000000445D5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Mesh::NormalizeNormals(__int64 this)
{
  unsigned int *v1; // x19
  __int64 *v2; // x21
  unsigned int v3; // w22
  __int64 v4; // [xsp+8h] [xbp-38h] BYREF
  int v5; // [xsp+10h] [xbp-30h]
  __int64 v6; // [xsp+18h] [xbp-28h]

  v1 = (unsigned int *)this;
  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)(this + 60) >= 1 && *(_DWORD *)this )
  {
    v2 = *(__int64 **)(this + 72);
    v3 = 0;
    do
    {
      v4 = *v2;
      v5 = *((_DWORD *)v2 + 2);
      this = Caver::Vector3::Normalize((Caver::Vector3 *)&v4);
      ++v3;
      *v2 = v4;
      *((_DWORD *)v2 + 2) = v5;
      v2 = (__int64 *)((char *)v2 + v1[16]);
    }
    while ( v3 < *v1 );
  }
  return this;
}

