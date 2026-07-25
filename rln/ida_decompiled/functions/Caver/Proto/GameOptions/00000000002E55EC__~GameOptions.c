/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E55EC
 * Mangled: _ZN5Caver5Proto11GameOptionsD2Ev
 * Demangled: Caver::Proto::GameOptions::~GameOptions()
 *
 * Callers: 3
 *   0x00000000001F6A70  Caver::Proto::GameOptions::~GameOptions()
 *   0x0000000000202370  Caver::Proto::GameOptions::~GameOptions()
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x00000000002E55F8 string=0x00000000002E55FC " "
 *   insn=0x00000000002E55FC string=0x00000000002E5600 ""
 *   insn=0x00000000002E5604 string=0x00000000002E5608 "A"
 *   insn=0x00000000002E5608 string=0x00000000002E560C "h"
 *   insn=0x00000000002E560C string=0x00000000002E5610 " "
 *   insn=0x00000000002E5610 string=0x00000000002E5614 ""
 *   insn=0x00000000002E5614 string=0x00000000002E5618 ""
 *   insn=0x00000000002E561C string=0x00000000002E5620 "`"
 *   insn=0x00000000002E5620 string=0x00000000002E5624 "`.@"
 *   insn=0x00000000002E5620 string=0x00000000002E564C "i"
 *   insn=0x00000000002E5628 string=0x00000000002E562C ""
 *   insn=0x00000000002E5628 string=0x00000000002E5638 "`2@"
 *   insn=0x00000000002E562C string=0x00000000002E5630 ""
 *   insn=0x00000000002E563C string=0x00000000002E5640 ""
 *   insn=0x00000000002E5640 string=0x00000000002E5644 ""
 *   insn=0x00000000002E564C string=0x00000000002E5650 "`\n@"
 *   insn=0x00000000002E5650 string=0x00000000002E5654 "?"
 *   insn=0x00000000002E5658 string=0x00000000002E568C "h"
 *   insn=0x00000000002E565C string=0x00000000002E5660 "xt"
 *   insn=0x00000000002E5664 string=0x00000000002E5668 "\t"
 *   insn=0x00000000002E5668 string=0x00000000002E566C ")"
 *   insn=0x00000000002E5670 string=0x00000000002E5674 " "
 *   insn=0x00000000002E5674 string=0x00000000002E5678 "i"
 *   insn=0x00000000002E5678 string=0x00000000002E567C "`\n@"
 *   insn=0x00000000002E5690 string=0x00000000002E5694 "`"
 *   insn=0x00000000002E5694 string=0x00000000002E5698 "@"
 *   insn=0x00000000002E5698 string=0x00000000002E569C "1>"
 *   insn=0x00000000002E569C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002E56B0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E56B4 string=0x00000000002E56B8 "h\n@"
 *   insn=0x00000000002E56BC string=0x00000000002E56C0 "?"
 *   insn=0x00000000002E56C4 string=0x00000000002E56F4 "i"
 *   insn=0x00000000002E56D0 string=0x00000000002E56D4 ""
 *   insn=0x00000000002E56D4 string=0x00000000002E56D8 ""
 *   insn=0x00000000002E56DC string=0x00000000002E56E0 "i"
 *   insn=0x00000000002E56E0 string=0x00000000002E56E4 "h\n@"
 *   insn=0x00000000002E5720 string=0x00000000002E5724 "hp\n"
 *   insn=0x00000000002E5724 string=0x00000000002E5728 "\t"
 *   insn=0x00000000002E5734 string=0x00000000002E5738 " "
 *   insn=0x00000000002E5738 string=0x00000000002E573C ""
 *   insn=0x00000000002E5740 string=0x00000000002E5744 ""
 *   insn=0x00000000002E574C string=0x00000000002E5750 "`.@"
 *   insn=0x00000000002E5754 string=0x00000000002E5758 ""
 *   insn=0x00000000002E5754 string=0x00000000002E5764 "`2@"
 *   insn=0x00000000002E5758 string=0x00000000002E575C ""
 *   insn=0x00000000002E5768 string=0x00000000002E576C ""
 *   insn=0x00000000002E5778 string=0x00000000002E577C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameOptions::~GameOptions(Caver::Proto::GameOptions *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  int v4; // w9
  _QWORD *v5; // x0
  __int64 i; // x20
  __int64 v7; // x8

  *(_QWORD *)this = off_6C6AC0;
  if ( (Caver::Proto::GameOptions *)Caver::Proto::GameOptions::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 11);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 12);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_DWORD *)this + 7);
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v4 >= 1 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v7 = v5[i];
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(v5[i]);
        v4 = *((_DWORD *)this + 7);
        v5 = (_QWORD *)*((_QWORD *)this + 2);
      }
    }
  }
  if ( v5 != (_QWORD *)((char *)this + 40) && v5 )
    operator delete[](v5);
  google::protobuf::MessageLite::~MessageLite(this);
}

