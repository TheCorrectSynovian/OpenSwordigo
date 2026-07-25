/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BC24
 * Mangled: _ZN5Caver5ModelD2Ev
 * Demangled: Caver::Model::~Model()
 *
 * Callers: 1
 *   0x0000000000203180  Caver::Model::~Model()
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x000000000029BC38 string=0x000000000029BC3C "V"
 *   insn=0x000000000029BC48 string=0x000000000029BC4C "t"
 *   insn=0x000000000029BC4C string=0x000000000029BC50 "4"
 *   insn=0x000000000029BC50 string=0x000000000029BC94 "t"
 *   insn=0x000000000029BC54 string=0x000000000029BC58 ""
 *   insn=0x000000000029BC64 string=0x000000000029BC68 "\t@"
 *   insn=0x000000000029BC74 string=0x000000000029BC78 ""
 *   insn=0x000000000029BC84 string=0x000000000029BC88 "@"
 *   insn=0x000000000029BC9C string=0x000000000029BCF8 "t"
 *   insn=0x000000000029BCA0 string=0x000000000029BCA4 "5"
 *   insn=0x000000000029BCA8 string=0x000000000029BCAC ""
 *   insn=0x000000000029BCB8 string=0x000000000029BCBC "\t@"
 *   insn=0x000000000029BCC8 string=0x000000000029BCCC ""
 *   insn=0x000000000029BCD8 string=0x000000000029BCDC "@"
 *   insn=0x000000000029BCF0 string=0x000000000029BCF4 "t"
 *   insn=0x000000000029BCF8 string=0x000000000029BD04 "h"
 *   insn=0x000000000029BCFC string=0x000000000029BD00 "lm"
 *   insn=0x000000000029BD00 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029BD04 string=0x000000000029BD08 "I""
 *   insn=0x000000000029BD08 string=0x000000000029BD0C ")"
 *   insn=0x000000000029BD14 string=0x000000000029BD18 "a"
 *   insn=0x000000000029BD18 string=0x000000000029BD44 "I""
 *   insn=0x000000000029BD28 string=0x000000000029BD88 "Ri"
 *   insn=0x000000000029BD44 string=0x000000000029BD48 ")=G"
 *   insn=0x000000000029BD48 string=0x000000000029BD4C "!"
 *   insn=0x000000000029BD50 string=0x000000000029BD54 "\t"
 *   insn=0x000000000029BD50 string=0x000000000029BD68 "\t"
 *   insn=0x000000000029BD54 string=0x000000000029BD58 "*"
 *   insn=0x000000000029BD58 string=0x000000000029BD5C "\n"
 *   insn=0x000000000029BD64 string=0x000000000029BD74 "?"
 *   insn=0x000000000029BD68 string=0x000000000029BD6C "*"
 *   insn=0x000000000029BD6C string=0x000000000029BD70 "\n"
 *   insn=0x000000000029BD74 string=0x000000000029BD78 ","
 *   insn=0x000000000029BD88 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029BD9C string=0x000000000029BDA0 "6"
 *   insn=0x000000000029BDA4 string=0x000000000029BDA8 ""
 *   insn=0x000000000029BDB4 string=0x000000000029BDB8 "\t@"
 *   insn=0x000000000029BDC4 string=0x000000000029BDC8 ""
 *   insn=0x000000000029BDD4 string=0x000000000029BDD8 "@"
 *   insn=0x000000000029BDEC string=0x000000000029BDF0 "u"
 *   insn=0x000000000029BDF4 string=0x000000000029BE30 "h"
 *   insn=0x000000000029BDFC string=0x000000000029BE2C "!m"
 *   insn=0x000000000029BE04 string=0x000000000029BE08 "h"
 *   insn=0x000000000029BE0C string=0x000000000029BE10 "(m"
 *   insn=0x000000000029BE14 string=0x000000000029BE18 "M"
 *   insn=0x000000000029BE18 string=0x000000000029BE1C "h"
 *   insn=0x000000000029BE20 string=0x000000000029BE24 "h"
 *   insn=0x000000000029BE30 string=0x000000000029BE34 "I""
 *   insn=0x000000000029BE34 string=0x000000000029BE38 ")"
 *   insn=0x000000000029BE44 string=0x000000000029BE48 "I""
 *   insn=0x000000000029BE48 string=0x000000000029BE4C ")=G"
 *   insn=0x000000000029BE4C string=0x000000000029BE50 "!"
 *   insn=0x000000000029BE50 string=0x000000000029BE54 "i"
 *   insn=0x000000000029BE54 string=0x000000000029BE58 "\t"
 *   insn=0x000000000029BE54 string=0x000000000029BE80 "\t"
 *   insn=0x000000000029BE58 string=0x000000000029BE5C "*"
 *   insn=0x000000000029BE5C string=0x000000000029BE60 "\n"
 *   insn=0x000000000029BE64 string=0x000000000029BE68 "?"
 *   insn=0x000000000029BE68 string=0x000000000029BE6C "l"
 *   insn=0x000000000029BE70 string=0x000000000029BE74 "L9"
 *   insn=0x000000000029BE80 string=0x000000000029BE84 "*"
 *   insn=0x000000000029BE84 string=0x000000000029BE88 "\n"
 *   insn=0x000000000029BE88 string=0x000000000029BE8C "?"
 *   insn=0x000000000029BE8C string=0x000000000029BE90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Model::~Model(Caver::Model *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  _QWORD *v6; // x23
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 5);
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
  v5 = (_QWORD *)*((_QWORD *)this + 1);
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v5 != v6 )
  {
    do
    {
      v7 = (_QWORD *)v5[1];
      if ( v7 )
      {
        v8 = v7[1] - 1LL;
        v7[1] = v8;
        if ( !v8 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v9 = v7[2] - 1LL;
          v7[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      v5 += 2;
    }
    while ( v6 != v5 );
    v5 = (_QWORD *)*((_QWORD *)this + 1);
  }
  if ( v5 )
    operator delete(v5);
  v10 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v10 != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(*(_QWORD *)this - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v10);
  }
}

