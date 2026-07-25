/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000472358
 * Mangled: _ZN5Caver11SceneObject22ValueForBindedPropertyEi
 * Demangled: Caver::SceneObject::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000200AF0  Caver::SceneObject::ValueForBindedProperty(int)
 *
 * Callees: 15
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x0000000000200AF0  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000567614  sub_567614
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 136
 *   insn=0x0000000000472368 string=0x000000000047236C "U"
 *   insn=0x0000000000472374 string=0x0000000000472378 "?"
 *   insn=0x0000000000472380 string=0x0000000000472384 "\t\t"
 *   insn=0x0000000000472380 string=0x0000000000472430 "("
 *   insn=0x0000000000472384 string=0x0000000000595E60 "<"
 *   insn=0x0000000000472388 string=0x000000000047238C ")"
 *   insn=0x000000000047238C string=0x0000000000472390 "(y"
 *   insn=0x0000000000472390 string=0x0000000000472394 ""
 *   insn=0x0000000000472398 string=0x000000000047239C "$@"
 *   insn=0x00000000004723A8 string=0x00000000004723AC "_"
 *   insn=0x00000000004723B0 string=0x00000000004723B4 "o"
 *   insn=0x00000000004723BC string=0x00000000004723C0 "L0"
 *   insn=0x00000000004723C0 string=0x00000000004723C4 "t"
 *   insn=0x00000000004723D4 string=0x00000000004723D8 "T"
 *   insn=0x00000000004723EC string=0x00000000004723F0 "\t"
 *   insn=0x00000000004723F0 string=0x00000000004723F4 ")"
 *   insn=0x00000000004723F4 string=0x00000000004723F8 "\t"
 *   insn=0x000000000047240C string=0x0000000000472410 "\t"
 *   insn=0x0000000000472410 string=0x0000000000472414 ")"
 *   insn=0x0000000000472414 string=0x0000000000472418 "\t"
 *   insn=0x0000000000472418 string=0x000000000047241C "I"
 *   insn=0x0000000000472424 string=0x0000000000472428 "F8"
 *   insn=0x0000000000472428 string=0x000000000047242C "Z"
 *   insn=0x0000000000472434 string=0x0000000000472438 ""
 *   insn=0x0000000000472438 string=0x000000000047243C "\t"
 *   insn=0x0000000000472440 string=0x0000000000472444 "*"
 *   insn=0x000000000047244C string=0x0000000000472450 ")"
 *   insn=0x0000000000472454 string=0x0000000000472458 "4"
 *   insn=0x000000000047245C string=0x0000000000472460 "2"
 *   insn=0x0000000000472464 string=0x0000000000472468 ""
 *   insn=0x0000000000472468 string=0x000000000047246C "("
 *   insn=0x000000000047246C string=0x0000000000472470 "!\t"
 *   insn=0x0000000000472470 string=0x000000000059859E "c"
 *   insn=0x000000000047247C string=0x0000000000472480 "C"
 *   insn=0x0000000000472488 string=0x000000000047248C "+"
 *   insn=0x0000000000472490 string=0x0000000000472494 ""
 *   insn=0x000000000047249C string=0x0000000000590D31 "_"
 *   insn=0x00000000004724B0 string=0x00000000004724B4 "X"
 *   insn=0x00000000004724BC string=0x00000000004724C0 ")"
 *   insn=0x00000000004724E0 string=0x00000000004724E4 ")"
 *   insn=0x00000000004724EC string=0x00000000004724F0 " "
 *   insn=0x00000000004724F4 string=0x00000000004724F8 ")=G"
 *   insn=0x00000000004724F8 string=0x00000000004724FC "!"
 *   insn=0x00000000004724FC string=0x0000000000472500 ")\n"
 *   insn=0x0000000000472500 string=0x0000000000472504 "\t"
 *   insn=0x0000000000472500 string=0x0000000000472644 "\t"
 *   insn=0x0000000000472504 string=0x0000000000472508 "*"
 *   insn=0x0000000000472508 string=0x000000000047250C "\n"
 *   insn=0x0000000000472510 string=0x0000000000472514 "O"
 *   insn=0x0000000000472514 string=0x0000000000472650 "?"
 *   insn=0x0000000000472528 string=0x000000000047252C ""
 *   insn=0x0000000000472534 string=0x0000000000472538 "a"
 *   insn=0x0000000000472544 string=0x0000000000472548 "* "
 *   insn=0x0000000000472548 string=0x00000000001FA5F0 "0'"
 *   insn=0x0000000000472580 string=0x0000000000472584 ")"
 *   insn=0x000000000047259C string=0x00000000004725A0 "A"
 *   insn=0x00000000004725A0 string=0x00000000004726A8 "\n"
 *   insn=0x00000000004725D0 string=0x00000000004725D4 "y"
 *   insn=0x00000000004725E8 string=0x00000000004725EC ")"
 *   insn=0x00000000004725FC string=0x0000000000472600 ")=G"
 *   insn=0x0000000000472600 string=0x0000000000472604 "!"
 *   insn=0x0000000000472608 string=0x000000000047260C "\t"
 *   insn=0x000000000047260C string=0x0000000000472610 "*"
 *   insn=0x0000000000472610 string=0x0000000000472614 "\n"
 *   insn=0x0000000000472618 string=0x000000000047261C ""
 *   insn=0x0000000000472620 string=0x0000000000472624 ")=G"
 *   insn=0x0000000000472624 string=0x0000000000472628 "!"
 *   insn=0x000000000047262C string=0x0000000000472630 "\t"
 *   insn=0x0000000000472630 string=0x0000000000472634 "*"
 *   insn=0x0000000000472634 string=0x0000000000472638 "\n"
 *   insn=0x0000000000472644 string=0x0000000000472648 "*"
 *   insn=0x0000000000472648 string=0x000000000047264C "\n"
 *   insn=0x0000000000472658 string=0x000000000047265C "R"
 *   insn=0x0000000000472664 string=0x0000000000472668 ")=G"
 *   insn=0x0000000000472668 string=0x000000000047266C "!"
 *   insn=0x0000000000472670 string=0x0000000000472674 "\t"
 *   insn=0x0000000000472670 string=0x0000000000472688 "\t"
 *   insn=0x0000000000472674 string=0x0000000000472678 "*"
 *   insn=0x0000000000472678 string=0x000000000047267C "\n"
 *   insn=0x0000000000472684 string=0x0000000000472694 "?"
 *   insn=0x0000000000472688 string=0x000000000047268C "*"
 *   insn=0x000000000047268C string=0x0000000000472690 "\n"
 *   insn=0x000000000047269C string=0x00000000004726A0 "A"
 *   insn=0x00000000004726A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004726B0 string=0x00000000004726B4 "J"
 *   insn=0x00000000004726B8 string=0x00000000004726BC "(a"
 *   insn=0x00000000004726C8 string=0x00000000004726CC "J=G"
 *   insn=0x00000000004726CC string=0x00000000004726D0 ")!"
 *   insn=0x00000000004726D4 string=0x00000000004726D8 "*"
 *   insn=0x00000000004726D4 string=0x00000000004726EC "*"
 *   insn=0x00000000004726D8 string=0x00000000004726DC "K"
 *   insn=0x00000000004726DC string=0x00000000004726E0 "+"
 *   insn=0x00000000004726E8 string=0x00000000004726F8 "_"
 *   insn=0x00000000004726EC string=0x00000000004726F0 "K"
 *   insn=0x00000000004726F0 string=0x00000000004726F4 "+"
 *   insn=0x0000000000472704 string=0x0000000000472708 "'"
 *   insn=0x0000000000472718 string=0x000000000047271C "J"
 *   insn=0x0000000000472720 string=0x0000000000472724 "(a"
 *   insn=0x0000000000472730 string=0x0000000000472734 "J=G"
 *   insn=0x0000000000472734 string=0x0000000000472738 ")!"
 *   insn=0x000000000047273C string=0x0000000000472740 "*"
 *   insn=0x000000000047273C string=0x0000000000472818 "*"
 *   insn=0x0000000000472740 string=0x0000000000472744 "K"
 *   insn=0x0000000000472744 string=0x0000000000472748 "+"
 *   insn=0x000000000047274C string=0x0000000000472750 "+"
 *   insn=0x0000000000472750 string=0x00000000004727FC "_"
 *   insn=0x0000000000472760 string=0x0000000000472764 ")"
 *   insn=0x000000000047276C string=0x0000000000472770 "`"
 *   insn=0x0000000000472774 string=0x0000000000472778 ")=G"
 *   insn=0x0000000000472778 string=0x000000000047277C "!"
 *   insn=0x000000000047277C string=0x0000000000472780 ")"
 *   insn=0x0000000000472780 string=0x0000000000472784 "\t"
 *   insn=0x0000000000472780 string=0x00000000004727A4 "\t"
 *   insn=0x0000000000472784 string=0x0000000000472788 "*"
 *   insn=0x0000000000472788 string=0x000000000047278C "\n"
 *   insn=0x0000000000472790 string=0x0000000000472794 "?"
 *   insn=0x0000000000472794 string=0x0000000000472798 ","
 *   insn=0x000000000047279C string=0x00000000004727A0 ""
 *   insn=0x00000000004727A4 string=0x00000000004727A8 "*"
 *   insn=0x00000000004727A8 string=0x00000000004727AC "\n"
 *   insn=0x00000000004727AC string=0x00000000004727B0 "?"
 *   insn=0x00000000004727B0 string=0x00000000004727B4 "M"
 *   insn=0x00000000004727B4 string=0x00000000004727B8 "!"
 *   insn=0x00000000004727C4 string=0x00000000004727C8 "J"
 *   insn=0x00000000004727CC string=0x00000000004727D0 "(a"
 *   insn=0x00000000004727D4 string=0x00000000004727D8 " "
 *   insn=0x00000000004727DC string=0x00000000004727E0 "J=G"
 *   insn=0x00000000004727E0 string=0x00000000004727E4 ")!"
 *   insn=0x00000000004727E8 string=0x00000000004727EC "*"
 *   insn=0x00000000004727EC string=0x00000000004727F0 "K"
 *   insn=0x00000000004727F0 string=0x00000000004727F4 "+"
 *   insn=0x0000000000472810 string=0x0000000000472814 ",<"
 *   insn=0x0000000000472818 string=0x000000000047281C "K"
 *   insn=0x000000000047281C string=0x0000000000472820 "+"
 *   insn=0x0000000000472820 string=0x0000000000472824 "_"
 *   insn=0x000000000047283C string=0x0000000000472840 "!<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::SceneObject::ValueForBindedProperty(
        Caver::SceneObject *this@<X0>,
        const Caver::Program *a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x20
  void *v11; // x0
  char *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+0h] [xbp-60h] BYREF
  char *v18; // [xsp+8h] [xbp-58h] BYREF
  __int64 v19; // [xsp+10h] [xbp-50h]
  __int64 v20; // [xsp+18h] [xbp-48h]
  __int64 v21; // [xsp+20h] [xbp-40h]
  __int64 v22; // [xsp+28h] [xbp-38h]
  __int64 v23; // [xsp+38h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (int)a2 )
  {
    case 0:
      v4 = *((_QWORD *)this + 9);
      if ( v4 )
        sub_56A528(&v18, v4 + 80);
      else
        sub_566BB8((int)&v18, "");
      Caver::BindingValue::ValueWithString();
      v12 = v18 - 24;
      if ( v18 - 24 != (char *)&qword_6FD2E0 )
      {
        v13 = (unsigned int *)(v18 - 8);
        if ( !&pthread_create )
          goto LABEL_35;
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
        goto LABEL_36;
      }
      return;
    case 1:
      Caver::BindingValue::ValueWithString();
      return;
    case 2:
      Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 244), (bool)a2);
      return;
    case 3:
      v5 = (_QWORD *)*((_QWORD *)this + 11);
      if ( v5 )
      {
        sub_56A528(&v18, v5);
        v19 = v5[1];
        v6 = v5[2];
        v20 = v6;
        if ( v6 )
          ++*(_QWORD *)(v6 + 8);
        v21 = v5[3];
        v7 = v5[4];
        v22 = v7;
        if ( v7 )
          ++*(_QWORD *)(v7 + 8);
      }
      else
      {
        v21 = 0;
        v22 = 0;
        v20 = 0;
        v18 = &byte_6FD2F8;
        v19 = 0;
      }
      Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)&v18, a2);
      Caver::Program::~Program((Caver::Program *)&v18);
      return;
    default:
      v8 = (_DWORD)a2 - 4;
      if ( (unsigned int)((_DWORD)a2 - 4) > 0x14 )
      {
        *(_DWORD *)a3 = 0;
        *(_QWORD *)(a3 + 24) = 0;
        *(_QWORD *)(a3 + 32) = 0;
        *(_QWORD *)(a3 + 8) = 0;
        *(_QWORD *)(a3 + 16) = 0;
        return;
      }
      v9 = *((_QWORD *)this + 5);
      if ( v9 )
      {
        if ( v8 < *(_DWORD *)v9 )
          goto LABEL_14;
LABEL_28:
        sub_566BB8((int)&v18, "");
        Caver::BindingValue::ValueWithString();
        v12 = v18 - 24;
        if ( v18 - 24 == (char *)&qword_6FD2E0 )
          return;
        v13 = (unsigned int *)(v18 - 8);
        if ( &pthread_create )
        {
          do
            v14 = __ldaxr(v13);
          while ( __stlxr(v14 - 1, v13) );
          goto LABEL_36;
        }
        goto LABEL_35;
      }
      if ( v8 >= 0 )
        goto LABEL_28;
LABEL_14:
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL * v8);
      sub_56A528(&v18, v10 + 32);
      if ( !*((_QWORD *)v18 - 3) )
      {
        sub_56918C(&v18, "c", 1);
        if ( *(int *)(v10 + 56) >= 1 )
        {
          ((void (__fastcall *)(__int64 *__return_ptr, char *, __int64))loc_25A030)(
            &v17,
            "_",
            **(_QWORD **)(v10 + 64) + 80LL);
          sub_567614(&v18, &v17);
          v11 = (void *)(v17 - 24);
          if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
          {
            v15 = (unsigned int *)(v17 - 8);
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
              operator delete(v11);
          }
        }
      }
      Caver::BindingValue::ValueWithString();
      v12 = v18 - 24;
      if ( v18 - 24 != (char *)&qword_6FD2E0 )
      {
        v13 = (unsigned int *)(v18 - 8);
        if ( &pthread_create )
        {
          do
            v14 = __ldaxr(v13);
          while ( __stlxr(v14 - 1, v13) );
          goto LABEL_36;
        }
LABEL_35:
        v14 = (*v13)--;
LABEL_36:
        if ( v14 <= 0 )
          operator delete(v12);
      }
      return;
  }
}

