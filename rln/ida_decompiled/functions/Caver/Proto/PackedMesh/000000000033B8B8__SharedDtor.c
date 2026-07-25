/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B8B8
 * Mangled: _ZN5Caver5Proto10PackedMesh10SharedDtorEv
 * Demangled: Caver::Proto::PackedMesh::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 27
 *   insn=0x000000000033B8C4 string=0x000000000033B8C8 "S"
 *   insn=0x000000000033B8C8 string=0x000000000033B8CC "h"
 *   insn=0x000000000033B8D0 string=0x000000000033B8D4 "h"
 *   insn=0x000000000033B8D8 string=0x000000000033B8DC "uB"
 *   insn=0x000000000033B8E0 string=0x000000000033B8E4 " "
 *   insn=0x000000000033B8E4 string=0x000000000033B908 "h"
 *   insn=0x000000000033B8E8 string=0x000000000033B8EC "\t"
 *   insn=0x000000000033B8EC string=0x000000000033B8F0 "J"
 *   insn=0x000000000033B8F0 string=0x000000000033B8F4 "J"
 *   insn=0x000000000033B8F4 string=0x000000000033B8F8 "(a"
 *   insn=0x000000000033B8FC string=0x000000000033B900 "A"
 *   insn=0x000000000033B900 string=0x000000000033B904 "k"
 *   insn=0x000000000033B900 string=0x000000000033B928 "J"
 *   insn=0x000000000033B904 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033B910 string=0x000000000033B914 "!"
 *   insn=0x000000000033B914 string=0x000000000033B978 "V"
 *   insn=0x000000000033B928 string=0x000000000033B92C "J=G"
 *   insn=0x000000000033B92C string=0x000000000033B930 ")!"
 *   insn=0x000000000033B934 string=0x000000000033B938 "*"
 *   insn=0x000000000033B934 string=0x000000000033B94C "*"
 *   insn=0x000000000033B938 string=0x000000000033B93C "K"
 *   insn=0x000000000033B93C string=0x000000000033B940 "+"
 *   insn=0x000000000033B948 string=0x000000000033B958 "_"
 *   insn=0x000000000033B94C string=0x000000000033B950 "K"
 *   insn=0x000000000033B950 string=0x000000000033B954 "+"
 *   insn=0x000000000033B958 string=0x000000000033B95C "L"
 *   insn=0x000000000033B978 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PackedMesh::SharedDtor(Caver::Proto::PackedMesh *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 17);
  if ( v1 != &Caver::Proto::PackedMesh::_default_vertex_data_ && v1 )
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

