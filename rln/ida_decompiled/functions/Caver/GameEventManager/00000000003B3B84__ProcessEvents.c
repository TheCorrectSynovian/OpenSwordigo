/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B3B84
 * Mangled: _ZN5Caver16GameEventManager13ProcessEventsEv
 * Demangled: Caver::GameEventManager::ProcessEvents(void)
 *
 * Callers: 1
 *   0x00000000001F46A0  Caver::GameEventManager::ProcessEvents(void)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000003B3B98 string=0x00000000003B3B9C "u"
 *   insn=0x00000000003B3BB8 string=0x00000000003B3BC8 "`"
 *   insn=0x00000000003B3BBC string=0x00000000003B3BC0 ""
 *   insn=0x00000000003B3BC8 string=0x00000000003B3BCC ""
 *   insn=0x00000000003B3BCC string=0x00000000003B3BD0 ""
 *   insn=0x00000000003B3BD4 string=0x00000000003B3BD8 "4"
 *   insn=0x00000000003B3BD8 string=0x00000000003B3C1C "u"
 *   insn=0x00000000003B3BDC string=0x00000000003B3BE0 ""
 *   insn=0x00000000003B3BF0 string=0x00000000003B3BF4 "\t@"
 *   insn=0x00000000003B3BFC string=0x00000000003B3C00 ""
 *   insn=0x00000000003B3C10 string=0x00000000003B3C14 "@"
 *   insn=0x00000000003B3C24 string=0x00000000003B3C28 ""
 *   insn=0x00000000003B3C38 string=0x00000000003B3C94 "u\n"
 *   insn=0x00000000003B3C40 string=0x00000000003B3C44 "4"
 *   insn=0x00000000003B3C48 string=0x00000000003B3C4C ""
 *   insn=0x00000000003B3C5C string=0x00000000003B3C60 "\t@"
 *   insn=0x00000000003B3C68 string=0x00000000003B3C6C ""
 *   insn=0x00000000003B3C7C string=0x00000000003B3C80 "@"
 *   insn=0x00000000003B3CAC string=0x00000000003B3CB0 "4"
 *   insn=0x00000000003B3CB4 string=0x00000000003B3CB8 ""
 *   insn=0x00000000003B3CC4 string=0x00000000003B3CC8 "\t@"
 *   insn=0x00000000003B3CD4 string=0x00000000003B3CD8 ""
 *   insn=0x00000000003B3CE4 string=0x00000000003B3CE8 "@"
 *   insn=0x00000000003B3D1C string=0x00000000003B3D20 "3"
 *   insn=0x00000000003B3D20 string=0x00000000003B3D44 "u"
 *   insn=0x00000000003B3D24 string=0x00000000003B3D28 "."
 *   insn=0x00000000003B3D28 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B3D38 string=0x00000000003B3D3C "h"
 *   insn=0x00000000003B3D4C string=0x00000000003B3DA8 "u\n"
 *   insn=0x00000000003B3D54 string=0x00000000003B3D58 "4"
 *   insn=0x00000000003B3D5C string=0x00000000003B3D60 ""
 *   insn=0x00000000003B3D70 string=0x00000000003B3D74 "\t@"
 *   insn=0x00000000003B3D7C string=0x00000000003B3D80 ""
 *   insn=0x00000000003B3D90 string=0x00000000003B3D94 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GameEventManager::ProcessEvents(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x21
  __int64 v3; // x24
  __int64 v4; // x22
  unsigned __int64 v5; // x23
  __int64 v6; // x1
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x22
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8

  v1 = this;
  v2 = this[1];
  v3 = this[2];
  if ( v3 != v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(v2 + v4);
      v7 = *(_QWORD **)(v2 + v4 + 8);
      if ( v7 )
        ++v7[1];
      this = (_QWORD *)(**(__int64 (__fastcall ***)(_QWORD, __int64))*v1)(*v1, v6);
      if ( v7 )
      {
        v8 = v7[1] - 1LL;
        v7[1] = v8;
        if ( !v8 )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v9 = v7[2] - 1LL;
          v7[2] = v9;
          if ( !v9 )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      v2 = v1[1];
      v3 = v1[2];
      ++v5;
      v4 += 16;
    }
    while ( v5 < (v3 - v2) >> 4 );
  }
  if ( v2 != v3 )
  {
    v10 = v2;
    do
    {
      v11 = *(_QWORD **)(v10 + 8);
      if ( v11 )
      {
        v12 = v11[1] - 1LL;
        v11[1] = v12;
        if ( !v12 )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      v10 += 16;
    }
    while ( v3 != v10 );
  }
  v1[2] = v2;
  return this;
}

