/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049823C
 * Mangled: _ZN5Caver8GUILabel25BoundsForCharacterAtIndexEi
 * Demangled: Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *
 * Callers: 1
 *   0x00000000001F4510  Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FED50  Caver::FontText::BoundsForCharacterAtIndex(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x0000000000498258 string=0x000000000049825C "Y"
 *   insn=0x000000000049825C string=0x0000000000498260 ")"
 *   insn=0x0000000000498284 string=0x0000000000498288 "Q"
 *   insn=0x0000000000498288 string=0x00000000004983CC "("
 *   insn=0x000000000049828C string=0x0000000000593851 "X"
 *   insn=0x0000000000498298 string=0x000000000049829C "G:"
 *   insn=0x00000000004982B0 string=0x00000000004982B4 "("
 *   insn=0x00000000004982B4 string=0x00000000004982B8 "_"
 *   insn=0x00000000004982C4 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004982C8 string=0x00000000004982E8 "z"
 *   insn=0x00000000004982DC string=0x00000000001F8510 "0'"
 *   insn=0x00000000004982E8 string=0x00000000004982EC "Z"
 *   insn=0x00000000004982F4 string=0x0000000000498314 "i"
 *   insn=0x00000000004982F8 string=0x00000000004982FC " "
 *   insn=0x00000000004982FC string=0x0000000000498360 ""
 *   insn=0x0000000000498314 string=0x0000000000498318 ")=G"
 *   insn=0x0000000000498318 string=0x000000000049831C "#"
 *   insn=0x0000000000498320 string=0x0000000000498324 "\t"
 *   insn=0x0000000000498320 string=0x0000000000498338 "\t"
 *   insn=0x0000000000498324 string=0x0000000000498328 "*"
 *   insn=0x0000000000498328 string=0x000000000049832C "\n"
 *   insn=0x0000000000498334 string=0x0000000000498344 "?"
 *   insn=0x0000000000498338 string=0x000000000049833C "*"
 *   insn=0x000000000049833C string=0x0000000000498340 "\n"
 *   insn=0x0000000000498358 string=0x000000000049835C " "
 *   insn=0x0000000000498360 string=0x0000000000498364 "\t"
 *   insn=0x0000000000498388 string=0x000000000049838C "("
 *   insn=0x000000000049838C string=0x0000000000498390 "_"
 *   insn=0x0000000000498398 string=0x000000000049839C "}s"
 *   insn=0x00000000004983B0 string=0x00000000004983B4 "W"
 *   insn=0x00000000004983C4 string=0x00000000004983C8 "h&"
 *   insn=0x00000000004983C4 string=0x00000000004983FC "i"
 *   insn=0x00000000004983D4 string=0x00000000004983D8 "a"
 *   insn=0x00000000004983FC string=0x0000000000498400 ")=G"
 *   insn=0x0000000000498408 string=0x000000000049840C "\t"
 *   insn=0x0000000000498408 string=0x0000000000498420 "\t"
 *   insn=0x000000000049840C string=0x0000000000498410 "*"
 *   insn=0x0000000000498410 string=0x0000000000498414 "\n"
 *   insn=0x000000000049841C string=0x000000000049842C "?"
 *   insn=0x0000000000498420 string=0x0000000000498424 "*"
 *   insn=0x0000000000498424 string=0x0000000000498428 "\n"
 *   insn=0x0000000000498444 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000498454 string=0x0000000000498458 "(a"
 *   insn=0x0000000000498460 string=0x0000000000498464 "j"
 *   insn=0x0000000000498464 string=0x0000000000498468 "J=G"
 *   insn=0x0000000000498468 string=0x000000000049846C ")!"
 *   insn=0x0000000000498470 string=0x0000000000498474 "*"
 *   insn=0x0000000000498470 string=0x00000000004984E0 "*"
 *   insn=0x0000000000498474 string=0x0000000000498478 "K"
 *   insn=0x0000000000498478 string=0x000000000049847C "+"
 *   insn=0x0000000000498484 string=0x00000000004984C4 "_"
 *   insn=0x0000000000498488 string=0x000000000049848C "j"
 *   insn=0x000000000049848C string=0x0000000000498490 "J"
 *   insn=0x0000000000498494 string=0x0000000000498498 "(a"
 *   insn=0x00000000004984A0 string=0x00000000004984A4 "j"
 *   insn=0x00000000004984A4 string=0x00000000004984A8 "J=G"
 *   insn=0x00000000004984A8 string=0x00000000004984AC ")!"
 *   insn=0x00000000004984B0 string=0x00000000004984B4 "*"
 *   insn=0x00000000004984B4 string=0x00000000004984B8 "K"
 *   insn=0x00000000004984B8 string=0x00000000004984BC "+"
 *   insn=0x00000000004984E0 string=0x00000000004984E4 "K"
 *   insn=0x00000000004984E4 string=0x00000000004984E8 "+"
 *   insn=0x00000000004984E8 string=0x00000000004984EC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GUILabel::BoundsForCharacterAtIndex(Caver::GUILabel *this@<X0>, int a2@<W1>, __int64 *a3@<X8>)
{
  Caver::FontText *v6; // x0
  char *v7; // x24
  const void **v8; // x21
  size_t v9; // x2
  __int64 *v10; // x23
  _QWORD *v11; // x1
  Caver::FontText *v12; // x0
  void *v13; // d8
  void *v14; // d9
  unsigned int *v15; // x8
  int v16; // w9
  char *v17; // x23
  size_t v18; // x2
  __int64 *v19; // x22
  unsigned int *v20; // x8
  int v21; // w9
  void *v22[5]; // [xsp+8h] [xbp-78h] BYREF

  v22[4] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (Caver::FontText *)*((_QWORD *)this + 36);
  if ( v6 )
  {
    Caver::FontText::BoundsForCharacterAtIndex(a3, v6, a2);
    return;
  }
  sub_566BB8((int)v22, "X");
  v7 = (char *)v22[0];
  v8 = (const void **)((char *)this + 256);
  v10 = (__int64 *)((char *)v22[0] - 24);
  v9 = *((_QWORD *)v22[0] - 3);
  v11 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v9 != *(v11 - 3) || memcmp(v22[0], v11, v9) )
  {
    sub_56A6A8((char *)this + 256);
    Caver::GUILabel::UpdateText(this);
    v7 = (char *)v22[0];
    v10 = (__int64 *)((char *)v22[0] - 24);
  }
  if ( v10 != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v7 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
    {
      operator delete(v10);
      v12 = (Caver::FontText *)*((_QWORD *)this + 36);
      if ( !v12 )
        goto LABEL_15;
LABEL_8:
      Caver::FontText::BoundsForCharacterAtIndex((__int64 *)v22, v12, a2);
      v13 = v22[0];
      v14 = v22[1];
      goto LABEL_16;
    }
  }
  v12 = (Caver::FontText *)*((_QWORD *)this + 36);
  if ( v12 )
    goto LABEL_8;
LABEL_15:
  v13 = 0;
  v14 = 0;
LABEL_16:
  sub_566BB8((int)v22, "");
  v17 = (char *)v22[0];
  v19 = (__int64 *)((char *)v22[0] - 24);
  v18 = *((_QWORD *)v22[0] - 3);
  if ( v18 != *((_QWORD *)*v8 - 3) || memcmp(v22[0], *v8, v18) )
  {
    sub_56A6A8((char *)this + 256);
    Caver::GUILabel::UpdateText(this);
    v17 = (char *)v22[0];
    v19 = (__int64 *)((char *)v22[0] - 24);
  }
  if ( v19 != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v19);
  }
  *a3 = (__int64)v13;
  a3[1] = (__int64)v14;
}

