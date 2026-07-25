/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CC24
 * Mangled: _ZN5Caver5Proto12UnpackedMesh10SharedDtorEv
 * Demangled: Caver::Proto::UnpackedMesh::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x000000000033CC30 string=0x000000000033CC34 "S"
 *   insn=0x000000000033CC34 string=0x000000000033CC38 "h"
 *   insn=0x000000000033CC3C string=0x000000000033CC40 "H"
 *   insn=0x000000000033CC44 string=0x000000000033CC48 ""
 *   insn=0x000000000033CC4C string=0x000000000033CC50 " "
 *   insn=0x000000000033CC50 string=0x000000000033CC74 "h"
 *   insn=0x000000000033CC54 string=0x000000000033CC58 "\t"
 *   insn=0x000000000033CC58 string=0x000000000033CC5C "J"
 *   insn=0x000000000033CC5C string=0x000000000033CC60 "J"
 *   insn=0x000000000033CC60 string=0x000000000033CC64 "(a"
 *   insn=0x000000000033CC68 string=0x000000000033CC6C "A"
 *   insn=0x000000000033CC6C string=0x000000000033CC94 "J"
 *   insn=0x000000000033CC70 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033CC7C string=0x000000000033CC80 "!"
 *   insn=0x000000000033CC80 string=0x000000000033CCE4 "{"
 *   insn=0x000000000033CC94 string=0x000000000033CC98 "J=G"
 *   insn=0x000000000033CC98 string=0x000000000033CC9C ")!"
 *   insn=0x000000000033CCA0 string=0x000000000033CCA4 "*"
 *   insn=0x000000000033CCA0 string=0x000000000033CCB8 "*"
 *   insn=0x000000000033CCA4 string=0x000000000033CCA8 "K"
 *   insn=0x000000000033CCA8 string=0x000000000033CCAC "+"
 *   insn=0x000000000033CCB4 string=0x000000000033CCC4 "_"
 *   insn=0x000000000033CCB8 string=0x000000000033CCBC "K"
 *   insn=0x000000000033CCBC string=0x000000000033CCC0 "+"
 *   insn=0x000000000033CCC4 string=0x000000000033CCC8 "L"
 *   insn=0x000000000033CCE4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::UnpackedMesh::SharedDtor(Caver::Proto::UnpackedMesh *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 14);
  if ( v1 != &Caver::Proto::UnpackedMesh::_default_vertex_data_ && v1 )
  {
    v2 = (__int64 *)(*v1 - 24);
    if ( v2 != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(*v1 - 8);
      if ( &pthread_create )
      {
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
      }
      else
      {
        v4 = (*v3)--;
      }
      if ( v4 <= 0 )
      {
        v5 = v1;
        operator delete(v2);
        v1 = v5;
      }
    }
    operator delete(v1);
  }
}

