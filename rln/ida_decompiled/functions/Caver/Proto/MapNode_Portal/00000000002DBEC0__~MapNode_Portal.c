/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBEC0
 * Mangled: _ZN5Caver5Proto14MapNode_PortalD0Ev
 * Demangled: Caver::Proto::MapNode_Portal::~MapNode_Portal()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002DBFBC  Caver::Proto::MapNode_Portal::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x00000000002DBECC string=0x00000000002DBED0 "T"
 *   insn=0x00000000002DBED8 string=0x00000000002DBEDC "I "
 *   insn=0x00000000002DBEE0 string=0x00000000002DBEE4 "h "
 *   insn=0x00000000002DBEE4 string=0x00000000002DBEE8 "`\n@"
 *   insn=0x00000000002DBEE8 string=0x00000000002DBEEC "aD"
 *   insn=0x00000000002DBEEC string=0x00000000002DBEF0 ")"
 *   insn=0x00000000002DBEF0 string=0x00000000002DBEF4 "A"
 *   insn=0x00000000002DBEF8 string=0x00000000002DBEFC "h"
 *   insn=0x00000000002DBEFC string=0x00000000002DBF00 " "
 *   insn=0x00000000002DBF04 string=0x00000000002DBF08 "\t"
 *   insn=0x00000000002DBF08 string=0x00000000002DBF0C "J "
 *   insn=0x00000000002DBF0C string=0x00000000002DBF10 "J"
 *   insn=0x00000000002DBF10 string=0x00000000002DBF14 "(a"
 *   insn=0x00000000002DBF1C string=0x00000000002DBF54 "J "
 *   insn=0x00000000002DBF20 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DBF28 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002DBF3C string=0x00000000002DBF40 "!"
 *   insn=0x00000000002DBF54 string=0x00000000002DBF58 "J=G"
 *   insn=0x00000000002DBF58 string=0x00000000002DBF5C ")!"
 *   insn=0x00000000002DBF60 string=0x00000000002DBF64 "*"
 *   insn=0x00000000002DBF60 string=0x00000000002DBF78 "*"
 *   insn=0x00000000002DBF64 string=0x00000000002DBF68 "K"
 *   insn=0x00000000002DBF68 string=0x00000000002DBF6C "+"
 *   insn=0x00000000002DBF74 string=0x00000000002DBF84 "_"
 *   insn=0x00000000002DBF78 string=0x00000000002DBF7C "K"
 *   insn=0x00000000002DBF7C string=0x00000000002DBF80 "+"
 *   insn=0x00000000002DBFA4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DBFB4 string=0x00000000002DBFB8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapNode_Portal::~MapNode_Portal(Caver::Proto::MapNode_Portal *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C6610;
  if ( v2 != &Caver::Proto::MapNode_Portal::_default_destination_name_ && v2 )
  {
    v3 = (__int64 *)(*v2 - 24);
    if ( v3 != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(*v2 - 8);
      if ( &pthread_create )
      {
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
      }
      else
      {
        v5 = (*v4)--;
      }
      if ( v5 <= 0 )
      {
        v6 = v2;
        operator delete(v3);
        v2 = v6;
      }
    }
    operator delete(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

