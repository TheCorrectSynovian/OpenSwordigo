/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004760BC
 * Mangled: _ZN5Caver16SceneObjectGroup25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F5650  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 13
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6070  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000004763D0  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x00000000004760CC string=0x00000000004760D0 "V"
 *   insn=0x00000000004760DC string=0x00000000004760E0 "?"
 *   insn=0x00000000004760E4 string=0x00000000004760E8 "("
 *   insn=0x00000000004760EC string=0x0000000000595EBC "H"
 *   insn=0x00000000004760F0 string=0x00000000004760F4 ")"
 *   insn=0x00000000004760F4 string=0x00000000004760F8 "(y"
 *   insn=0x00000000004760F8 string=0x00000000004760FC ""
 *   insn=0x0000000000476108 string=0x000000000047610C ""
 *   insn=0x0000000000476118 string=0x00000000001F6070 "0'"
 *   insn=0x000000000047611C string=0x0000000000476120 "i"
 *   insn=0x0000000000476120 string=0x0000000000476124 ")"
 *   insn=0x0000000000476130 string=0x0000000000476134 "i"
 *   insn=0x0000000000476134 string=0x0000000000476138 ")=G"
 *   insn=0x0000000000476138 string=0x000000000047613C "!"
 *   insn=0x0000000000476140 string=0x0000000000476144 "\t"
 *   insn=0x0000000000476140 string=0x00000000004762B4 "\t"
 *   insn=0x0000000000476144 string=0x0000000000476148 "*"
 *   insn=0x0000000000476148 string=0x000000000047614C "\n"
 *   insn=0x0000000000476150 string=0x0000000000476154 "["
 *   insn=0x0000000000476154 string=0x00000000004762C0 "?"
 *   insn=0x0000000000476158 string=0x000000000047615C "!"
 *   insn=0x000000000047615C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047616C string=0x00000000001F4540 "P'"
 *   insn=0x0000000000476180 string=0x00000000001F38E0 "P'"
 *   insn=0x0000000000476190 string=0x0000000000476194 "h"
 *   insn=0x00000000004761A0 string=0x00000000004761A4 "i"
 *   insn=0x00000000004761A8 string=0x00000000004761AC "4"
 *   insn=0x00000000004761AC string=0x00000000004761F0 "h"
 *   insn=0x00000000004761B0 string=0x00000000004761B4 ""
 *   insn=0x00000000004761C4 string=0x00000000004761C8 "\t@"
 *   insn=0x00000000004761D0 string=0x00000000004761D4 ""
 *   insn=0x00000000004761E4 string=0x00000000004761E8 "@"
 *   insn=0x0000000000476208 string=0x000000000047620C ""
 *   insn=0x000000000047620C string=0x0000000000476210 "h&"
 *   insn=0x0000000000476218 string=0x000000000047621C ""
 *   insn=0x000000000047621C string=0x0000000000476220 "h."
 *   insn=0x0000000000476228 string=0x000000000047622C ""
 *   insn=0x000000000047622C string=0x0000000000476230 "h""
 *   insn=0x0000000000476244 string=0x0000000000476248 "\"
 *   insn=0x000000000047624C string=0x0000000000476250 "i"
 *   insn=0x0000000000476258 string=0x000000000047625C ")"
 *   insn=0x0000000000476260 string=0x0000000000476264 "a"
 *   insn=0x0000000000476264 string=0x0000000000476268 "t"
 *   insn=0x0000000000476264 string=0x0000000000476290 "i"
 *   insn=0x0000000000476268 string=0x00000000004762F4 "t"
 *   insn=0x0000000000476274 string=0x0000000000476278 "a"
 *   insn=0x0000000000476290 string=0x0000000000476294 ")=G"
 *   insn=0x0000000000476294 string=0x0000000000476298 "!"
 *   insn=0x000000000047629C string=0x00000000004762A0 "\t"
 *   insn=0x000000000047629C string=0x00000000004762D4 "\t"
 *   insn=0x00000000004762A0 string=0x00000000004762A4 "*"
 *   insn=0x00000000004762A4 string=0x00000000004762A8 "\n"
 *   insn=0x00000000004762B0 string=0x00000000004762E0 "?"
 *   insn=0x00000000004762B4 string=0x00000000004762B8 "*"
 *   insn=0x00000000004762B8 string=0x00000000004762BC "\n"
 *   insn=0x00000000004762C0 string=0x00000000004762C4 "L"
 *   insn=0x00000000004762C8 string=0x00000000004762CC "6"
 *   insn=0x00000000004762D4 string=0x00000000004762D8 "*"
 *   insn=0x00000000004762D8 string=0x00000000004762DC "\n"
 *   insn=0x00000000004762E0 string=0x00000000004762E4 ","
 *   insn=0x00000000004762E8 string=0x00000000004762EC "."
 *   insn=0x0000000000476300 string=0x0000000000476304 ""
 *   insn=0x0000000000476314 string=0x0000000000476318 "\t@"
 *   insn=0x0000000000476320 string=0x0000000000476324 ""
 *   insn=0x0000000000476334 string=0x0000000000476338 "@"
 *   insn=0x0000000000476344 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047634C string=0x0000000000476350 "j"
 *   insn=0x0000000000476350 string=0x0000000000476354 "J"
 *   insn=0x0000000000476358 string=0x000000000047635C "(a"
 *   insn=0x0000000000476360 string=0x0000000000476364 " "
 *   insn=0x0000000000476364 string=0x0000000000476368 "j"
 *   insn=0x0000000000476368 string=0x000000000047636C "J=G"
 *   insn=0x000000000047636C string=0x0000000000476370 ")!"
 *   insn=0x0000000000476374 string=0x0000000000476378 "*"
 *   insn=0x0000000000476374 string=0x00000000004763A4 "*"
 *   insn=0x0000000000476378 string=0x000000000047637C "K"
 *   insn=0x000000000047637C string=0x0000000000476380 "+"
 *   insn=0x0000000000476384 string=0x0000000000476388 "_"
 *   insn=0x000000000047639C string=0x00000000004763A0 "I-"
 *   insn=0x00000000004763A4 string=0x00000000004763A8 "K"
 *   insn=0x00000000004763A8 string=0x00000000004763AC "+"
 *   insn=0x00000000004763AC string=0x00000000004763B0 "_"
 *   insn=0x00000000004763C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004763C8 string=0x00000000004763CC ">-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectGroup::SetValueForBindedProperty(
        Caver::SceneObjectGroup *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  __int64 *v8; // x21
  _QWORD *v9; // x20
  _QWORD *v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x1
  void *v14; // x0
  __int64 v15; // x20
  unsigned int *v16; // x8
  int v17; // w9
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // [xsp+8h] [xbp-48h] BYREF
  __int64 *v22; // [xsp+18h] [xbp-38h] BYREF
  _QWORD *v23; // [xsp+20h] [xbp-30h]
  __int64 v24; // [xsp+28h] [xbp-28h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      sub_56A528(&v22, *((_QWORD *)a3 + 1));
      Caver::SceneObjectGroup::SetIdentifier();
      v5 = v22 - 3;
      if ( v22 - 3 != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(v22 - 1);
        if ( &pthread_create )
        {
          do
            v7 = __ldaxr(v6);
          while ( __stlxr(v7 - 1, v6) );
        }
        else
        {
          v7 = (*v6)--;
        }
        if ( v7 <= 0 )
          operator delete(v5);
      }
      return;
    case 1:
      *((_BYTE *)this + 72) = **((_BYTE **)a3 + 1);
      return;
    case 2:
      *((_BYTE *)this + 73) = **((_BYTE **)a3 + 1);
      return;
    case 3:
      *((_BYTE *)this + 75) = **((_BYTE **)a3 + 1);
      return;
    case 4:
      v8 = (__int64 *)operator new(0x28u);
      Caver::BindingValue::ProgramValue(v8, a3);
      v22 = v8;
      boost::detail::shared_count::shared_count<Caver::Program>();
      boost::detail::sp_enable_shared_from_this();
      v9 = (_QWORD *)*((_QWORD *)this + 6);
      v22 = (__int64 *)*((_QWORD *)this + 5);
      v10 = v23;
      *((_QWORD *)this + 5) = v8;
      *((_QWORD *)this + 6) = v10;
      v23 = v9;
      if ( v9 )
      {
        v11 = v9[1] - 1LL;
        v9[1] = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v12 = v9[2] - 1LL;
          v9[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v13 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
      if ( v13 )
        sub_56A528(&v21, v13);
      else
        sub_566BB8((int)&v21, "");
      v14 = (void *)(v21 - 24);
      v15 = *(_QWORD *)(v21 - 24);
      if ( (__int64 *)(v21 - 24) == &qword_6FD2E0 )
        goto LABEL_17;
      v16 = (unsigned int *)(v21 - 8);
      if ( &pthread_create )
      {
        do
          v17 = __ldaxr(v16);
        while ( __stlxr(v17 - 1, v16) );
      }
      else
      {
        v17 = (*v16)--;
      }
      if ( v17 > 0 )
      {
LABEL_17:
        if ( v15 )
          return;
      }
      else
      {
        operator delete(v14);
        if ( v15 )
          return;
      }
      v18 = (_QWORD *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      if ( v18 )
      {
        v19 = v18[1] - 1LL;
        v18[1] = v19;
        if ( !v19 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          v20 = v18[2] - 1LL;
          v18[2] = v20;
          if ( !v20 )
            (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
        }
      }
      return;
    default:
      return;
  }
}

