/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBDFC
 * Mangled: _ZN5Caver5Proto14MapNode_Portal10SharedDtorEv
 * Demangled: Caver::Proto::MapNode_Portal::SharedDtor(void)
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
 *   insn=0x00000000002DBE08 string=0x00000000002DBE0C "S"
 *   insn=0x00000000002DBE0C string=0x00000000002DBE10 "h"
 *   insn=0x00000000002DBE14 string=0x00000000002DBE18 "H "
 *   insn=0x00000000002DBE1C string=0x00000000002DBE20 ""
 *   insn=0x00000000002DBE24 string=0x00000000002DBE28 " "
 *   insn=0x00000000002DBE28 string=0x00000000002DBE4C "h"
 *   insn=0x00000000002DBE2C string=0x00000000002DBE30 "\t"
 *   insn=0x00000000002DBE30 string=0x00000000002DBE34 "J "
 *   insn=0x00000000002DBE34 string=0x00000000002DBE38 "J"
 *   insn=0x00000000002DBE38 string=0x00000000002DBE3C "(a"
 *   insn=0x00000000002DBE40 string=0x00000000002DBE44 "A"
 *   insn=0x00000000002DBE44 string=0x00000000002DBE6C "J "
 *   insn=0x00000000002DBE48 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DBE54 string=0x00000000002DBE58 "!"
 *   insn=0x00000000002DBE6C string=0x00000000002DBE70 "J=G"
 *   insn=0x00000000002DBE70 string=0x00000000002DBE74 ")!"
 *   insn=0x00000000002DBE78 string=0x00000000002DBE7C "*"
 *   insn=0x00000000002DBE78 string=0x00000000002DBE90 "*"
 *   insn=0x00000000002DBE7C string=0x00000000002DBE80 "K"
 *   insn=0x00000000002DBE80 string=0x00000000002DBE84 "+"
 *   insn=0x00000000002DBE8C string=0x00000000002DBE9C "_"
 *   insn=0x00000000002DBE90 string=0x00000000002DBE94 "K"
 *   insn=0x00000000002DBE94 string=0x00000000002DBE98 "+"
 *   insn=0x00000000002DBE9C string=0x00000000002DBEA0 "L"
 *   insn=0x00000000002DBEAC string=0x00000000002DBEB0 "=9\n"
 *   insn=0x00000000002DBEBC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapNode_Portal::SharedDtor(Caver::Proto::MapNode_Portal *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::MapNode_Portal::_default_destination_name_ && v1 )
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

