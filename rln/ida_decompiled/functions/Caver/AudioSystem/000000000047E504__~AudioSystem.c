/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E504
 * Mangled: _ZN5Caver11AudioSystemD2Ev
 * Demangled: Caver::AudioSystem::~AudioSystem()
 *
 * Callers: 2
 *   0x00000000001F7E00  Caver::AudioSystem::~AudioSystem()
 *   0x000000000047E3D4  Caver::AudioSystem::AudioSystem(void)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201F60  Caver::AudioSystem::Shutdown(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x000000000047E518 string=0x000000000047E51C "t:@"
 *   insn=0x000000000047E51C string=0x000000000047E520 "4"
 *   insn=0x000000000047E520 string=0x000000000047E564 "t"
 *   insn=0x000000000047E524 string=0x000000000047E528 ""
 *   insn=0x000000000047E534 string=0x000000000047E538 "\t@"
 *   insn=0x000000000047E544 string=0x000000000047E548 ""
 *   insn=0x000000000047E554 string=0x000000000047E558 "@"
 *   insn=0x000000000047E56C string=0x000000000047E5A4 "t"
 *   insn=0x000000000047E574 string=0x000000000047E578 "@"
 *   insn=0x000000000047E578 string=0x000000000047E57C ""
 *   insn=0x000000000047E57C string=0x000000000047E580 ""
 *   insn=0x000000000047E584 string=0x000000000047E588 ""
 *   insn=0x000000000047E588 string=0x000000000047E58C ""
 *   insn=0x000000000047E59C string=0x000000000047E5A0 "t"
 *   insn=0x000000000047E5A4 string=0x000000000047E5B0 "tVA"
 *   insn=0x000000000047E5A8 string=0x000000000047E5AC "A"
 *   insn=0x000000000047E5AC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047E5C0 string=0x000000000047E5C4 "@"
 *   insn=0x000000000047E5C4 string=0x000000000047E5C8 ""
 *   insn=0x000000000047E5C8 string=0x000000000047E5CC ""
 *   insn=0x000000000047E5D0 string=0x000000000047E5D4 ""
 *   insn=0x000000000047E5D4 string=0x000000000047E5D8 ""
 *   insn=0x000000000047E5E8 string=0x000000000047E5EC "t\n@"
 *   insn=0x000000000047E600 string=0x000000000047E604 "+"
 *   insn=0x000000000047E61C string=0x000000000047E66C "u"
 *   insn=0x000000000047E624 string=0x000000000047E628 "5"
 *   insn=0x000000000047E62C string=0x000000000047E630 ""
 *   insn=0x000000000047E63C string=0x000000000047E640 "\t@"
 *   insn=0x000000000047E64C string=0x000000000047E650 ""
 *   insn=0x000000000047E65C string=0x000000000047E660 "@"
 *   insn=0x000000000047E67C string=0x000000000047E680 "@"
 *   insn=0x000000000047E680 string=0x000000000047E684 ""
 *   insn=0x000000000047E684 string=0x000000000047E688 ""
 *   insn=0x000000000047E68C string=0x000000000047E690 ""
 *   insn=0x000000000047E690 string=0x000000000047E694 ""
 *   insn=0x000000000047E6A4 string=0x000000000047E6A8 "u"
 *   insn=0x000000000047E6AC string=0x000000000047E704 "uZA"
 *   insn=0x000000000047E6BC string=0x000000000047E6C0 "#?"
 *   insn=0x000000000047E6C0 string=0x000000000047E6C4 "h"
 *   insn=0x000000000047E6CC string=0x000000000047E6D0 "%"
 *   insn=0x000000000047E6D8 string=0x000000000047E6DC "h"
 *   insn=0x000000000047E6E8 string=0x000000000047E6EC "v"
 *   insn=0x000000000047E6EC string=0x000000000047E6F0 "h"
 *   insn=0x000000000047E6F4 string=0x000000000047E6F8 "h"
 *   insn=0x000000000047E70C string=0x000000000047E744 "5"
 *   insn=0x000000000047E714 string=0x000000000047E718 "@"
 *   insn=0x000000000047E718 string=0x000000000047E71C ""
 *   insn=0x000000000047E71C string=0x000000000047E720 ""
 *   insn=0x000000000047E724 string=0x000000000047E728 ""
 *   insn=0x000000000047E728 string=0x000000000047E72C ""
 *   insn=0x000000000047E73C string=0x000000000047E740 "u\n@"
 *   insn=0x000000000047E754 string=0x000000000047E758 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AudioSystem::~AudioSystem(Caver::AudioSystem *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  _QWORD *v6; // x21
  _DWORD *v7; // x0
  int v8; // w8
  _QWORD *v9; // x20
  _QWORD *v10; // x21
  _DWORD *v11; // x0
  int v12; // w8

  Caver::AudioSystem::Shutdown(this);
  v2 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 5);
  v6 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v5 != v6 )
  {
    do
    {
      v7 = (_DWORD *)*v5;
      if ( *v5 )
      {
        v8 = v7[2] - 1;
        v7[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      ++v5;
    }
    while ( v6 != v5 );
    v5 = (_QWORD *)*((_QWORD *)this + 5);
  }
  if ( v5 )
    operator delete(v5);
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v9 != v10 )
  {
    do
    {
      v11 = (_DWORD *)*v9;
      if ( *v9 )
      {
        v12 = v11[2] - 1;
        v11[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      ++v9;
    }
    while ( v10 != v9 );
    v9 = (_QWORD *)*((_QWORD *)this + 2);
  }
  if ( v9 )
    operator delete(v9);
}

