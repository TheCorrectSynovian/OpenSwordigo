/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567088
 * Mangled: sub_567088
 * Demangled: sub_567088
 *
 * Callers: 40
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *   0x0000000000528E58  sub_528E58
 *   0x000000000052B780  sub_52B780
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536618  sub_536618
 *   0x00000000005372A4  sub_5372A4
 *   0x00000000005374EC  sub_5374EC
 *   0x0000000000537734  sub_537734
 *   0x000000000053797C  sub_53797C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *   0x000000000053B81C  sub_53B81C
 *   0x0000000000545DD0  sub_545DD0
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x0000000000559434  sub_559434
 *   0x0000000000559690  sub_559690
 *   0x00000000005598EC  sub_5598EC
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *   0x0000000000567088  sub_567088
 *   0x0000000000567254  sub_567254
 *   0x000000000056739C  sub_56739C
 *   0x000000000056754C  sub_56754C
 *   0x0000000000567614  sub_567614
 *   0x00000000005676D8  sub_5676D8
 *   0x0000000000567890  sub_567890
 *   0x000000000056A798  sub_56A798
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x00000000005670A0 string=0x00000000005670A4 "?"
 *   insn=0x00000000005670B4 string=0x00000000005670B8 "?"
 *   insn=0x00000000005670B8 string=0x00000000005670BC " "
 *   insn=0x00000000005670BC string=0x00000000005670C0 "3 "
 *   insn=0x00000000005670C4 string=0x00000000005670C8 "\n"
 *   insn=0x00000000005670CC string=0x00000000005670D0 "`f"
 *   insn=0x00000000005670D0 string=0x00000000005670D4 "b"
 *   insn=0x00000000005670D4 string=0x0000000000567120 "09"
 *   insn=0x00000000005670DC string=0x00000000005670E0 "s""
 *   insn=0x00000000005670E0 string=0x00000000005670E4 "`"
 *   insn=0x00000000005670EC string=0x000000000056711C "`f"
 *   insn=0x00000000005670F0 string=0x00000000005670F4 "B"
 *   insn=0x00000000005670F8 string=0x00000000005670FC "s"
 *   insn=0x0000000000567100 string=0x0000000000567104 "s"
 *   insn=0x0000000000567104 string=0x0000000000567108 "!"
 *   insn=0x0000000000567114 string=0x0000000000567118 "s"
 *   insn=0x0000000000567120 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000567138 string=0x0000000000567178 "_"
 *   insn=0x000000000056713C string=0x0000000000567140 "`"
 *   insn=0x000000000056714C string=0x0000000000567150 "s"
 *   insn=0x0000000000567150 string=0x0000000000567154 " `"
 *   insn=0x000000000056717C string=0x0000000000567180 "@"
 *   insn=0x0000000000567188 string=0x000000000056718C "ui"
 *   insn=0x0000000000567198 string=0x000000000056719C "_"
 *   insn=0x000000000056719C string=0x00000000005671A0 "l"
 *   insn=0x00000000005671B8 string=0x00000000005671BC "B<G"
 *   insn=0x00000000005671C0 string=0x00000000005671C4 "! "
 *   insn=0x00000000005671C0 string=0x00000000005671F8 """
 *   insn=0x00000000005671C4 string=0x00000000005671C8 """
 *   insn=0x00000000005671C8 string=0x00000000005671CC "C"
 *   insn=0x00000000005671CC string=0x00000000005671D0 "#"
 *   insn=0x00000000005671D4 string=0x00000000005671D8 "_"
 *   insn=0x00000000005671D8 string=0x00000000005671DC ","
 *   insn=0x00000000005671DC string=0x00000000005671E0 "4@"
 *   insn=0x00000000005671E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000005671F8 string=0x00000000005671FC "C"
 *   insn=0x00000000005671FC string=0x0000000000567200 "#"
 *   insn=0x0000000000567208 string=0x000000000059F980 "basic_string::_S_create"
 *   insn=0x000000000056721C string=0x0000000000567220 """
 *   insn=0x0000000000567220 string=0x0000000000567224 "!"
 *   insn=0x0000000000567224 string=0x0000000000567228 "_"
 *   insn=0x0000000000567228 string=0x000000000056722C "h"
 *   insn=0x0000000000567248 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000567250 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_567088(_BYTE **a1, unsigned __int64 a2)
{
  _BYTE *v2; // x20
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x19
  unsigned __int64 v6; // x0
  __int64 v7; // x0
  __int64 *v8; // x21
  size_t v9; // x2
  _BYTE *v10; // x23
  _BYTE *v11; // x1
  __int64 *v12; // x0
  unsigned int *v13; // x1
  int v14; // w2

  v2 = *a1;
  v3 = *((_QWORD *)*a1 - 2);
  if ( a2 != v3 || *((int *)v2 - 2) > 0 )
  {
    v4 = *((_QWORD *)v2 - 3);
    if ( a2 >= v4 )
      v4 = a2;
    if ( v4 > 0x3FFFFFFFFFFFFFF9LL )
      sub_56554C("basic_string::_S_create");
    v6 = v4 + 25;
    if ( v3 < v4 )
    {
      if ( v4 < 2 * v3 )
        v4 = 2 * v3;
      if ( v4 + 57 > 0x1000 && v3 < v4 )
      {
        v4 = v4 + 4096 - (((_WORD)v4 + 57) & 0xFFF);
        if ( v4 > 0x3FFFFFFFFFFFFFF9LL )
          v4 = 0x3FFFFFFFFFFFFFF9LL;
      }
      v6 = v4 + 25;
    }
    v7 = operator new(v6);
    v8 = (__int64 *)v7;
    v9 = *((_QWORD *)v2 - 3);
    v10 = (_BYTE *)(v7 + 24);
    *(_QWORD *)(v7 + 8) = v4;
    *(_DWORD *)(v7 + 16) = 0;
    if ( v9 )
    {
      v10 = (_BYTE *)(v7 + 24);
      if ( v9 == 1 )
        *(_BYTE *)(v7 + 24) = *v2;
      else
        memcpy((void *)(v7 + 24), v2, v9);
      v9 = *((_QWORD *)v2 - 3);
    }
    if ( v8 != &qword_6FD2E0 )
    {
      *v8 = v9;
      *((_BYTE *)v8 + v9 + 24) = 0;
    }
    v11 = *a1;
    v12 = (__int64 *)(*a1 - 24);
    if ( v12 != &qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v13 = (unsigned int *)(v11 - 8);
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = *((_DWORD *)v11 - 2);
        *((_DWORD *)v11 - 2) = v14 - 1;
      }
      if ( v14 <= 0 )
        operator delete(v12);
    }
    *a1 = v10;
  }
}

