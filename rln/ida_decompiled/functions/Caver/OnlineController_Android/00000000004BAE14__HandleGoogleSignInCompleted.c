/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAE14
 * Mangled: _ZN5Caver24OnlineController_Android27HandleGoogleSignInCompletedEb
 * Demangled: Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Callers: 1
 *   0x0000000000200FF0  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x00000000002034F0  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *   0x000000000054A024  sub_54A024
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 169
 *   insn=0x00000000004BAE30 string=0x00000000004BAE34 "Z"
 *   insn=0x00000000004BAE34 string=0x00000000004BAE38 "H"
 *   insn=0x00000000004BAE50 string=0x00000000004BAE54 "@"
 *   insn=0x00000000004BAE54 string=0x00000000004BAE58 "\"
 *   insn=0x00000000004BAE54 string=0x00000000004BB17C "H"
 *   insn=0x00000000004BAE6C string=0x0000000000597A47 "An error occured while signing in with Google. Please make you are connected to the internet and try again later."
 *   insn=0x00000000004BAE70 string=0x00000000004BAE74 "4!"
 *   insn=0x00000000004BAE74 string=0x00000000004BAE78 "U!"
 *   insn=0x00000000004BAE78 string=0x00000000004BAE7C "{"
 *   insn=0x00000000004BAE7C string=0x00000000004BAE80 "x"
 *   insn=0x00000000004BAE80 string=0x00000000004BB060 "(@"
 *   insn=0x00000000004BAE94 string=0x00000000004BAE98 "("
 *   insn=0x00000000004BAE98 string=0x00000000004BAE9C ""
 *   insn=0x00000000004BAE98 string=0x00000000004BAF3C "h\n@"
 *   insn=0x00000000004BAE9C string=0x00000000004BAEA0 ""
 *   insn=0x00000000004BAEB0 string=0x00000000004BAEB4 "&"
 *   insn=0x00000000004BAEB8 string=0x00000000004BAEBC "`"
 *   insn=0x00000000004BAED0 string=0x00000000004BAED4 "!"
 *   insn=0x00000000004BAED4 string=0x00000000004BAED8 "8"
 *   insn=0x00000000004BAEE0 string=0x00000000004BAEE4 ""
 *   insn=0x00000000004BAEE4 string=0x00000000004BAEE8 ""
 *   insn=0x00000000004BAF08 string=0x00000000004BAFC8 "I"
 *   insn=0x00000000004BAF0C string=0x00000000004BAF10 "H"
 *   insn=0x00000000004BAF10 string=0x00000000004BAF14 ""
 *   insn=0x00000000004BAF10 string=0x00000000004BAFB8 "9"
 *   insn=0x00000000004BAF14 string=0x00000000004BAF18 ""
 *   insn=0x00000000004BAF18 string=0x00000000004BAF1C ""
 *   insn=0x00000000004BAF34 string=0x00000000004BAF38 " "
 *   insn=0x00000000004BAF3C string=0x00000000004BAF40 "`"
 *   insn=0x00000000004BAF5C string=0x00000000004BAF60 "h"
 *   insn=0x00000000004BAF60 string=0x00000000004BAF64 ""
 *   insn=0x00000000004BAF64 string=0x00000000004BAF68 ""
 *   insn=0x00000000004BAF84 string=0x00000000004BAF88 "!"
 *   insn=0x00000000004BAF88 string=0x00000000004BAFEC "I"
 *   insn=0x00000000004BAF8C string=0x00000000004BAF90 "H"
 *   insn=0x00000000004BAF90 string=0x00000000004BAF94 ""
 *   insn=0x00000000004BAF94 string=0x00000000004BAF98 ""
 *   insn=0x00000000004BAF98 string=0x00000000004BAF9C ""
 *   insn=0x00000000004BAFBC string=0x00000000004BAFC0 "h"
 *   insn=0x00000000004BAFC0 string=0x00000000004BAFC4 "c"
 *   insn=0x00000000004BAFC0 string=0x00000000004BB12C ""
 *   insn=0x00000000004BAFC8 string=0x00000000004BAFCC ")=G"
 *   insn=0x00000000004BAFCC string=0x00000000004BAFD0 "!"
 *   insn=0x00000000004BAFD4 string=0x00000000004BAFD8 "\t"
 *   insn=0x00000000004BAFD4 string=0x00000000004BB010 "\t"
 *   insn=0x00000000004BAFD8 string=0x00000000004BAFDC "*"
 *   insn=0x00000000004BAFDC string=0x00000000004BAFE0 "\n"
 *   insn=0x00000000004BAFE4 string=0x00000000004BAFE8 ""
 *   insn=0x00000000004BAFE8 string=0x00000000004BB01C "?"
 *   insn=0x00000000004BAFEC string=0x00000000004BAFF0 ")=G"
 *   insn=0x00000000004BAFF0 string=0x00000000004BAFF4 "!"
 *   insn=0x00000000004BAFF4 string=0x00000000004BAFF8 "\t"
 *   insn=0x00000000004BAFF8 string=0x00000000004BAFFC "\t"
 *   insn=0x00000000004BAFF8 string=0x00000000004BB038 "\t"
 *   insn=0x00000000004BAFFC string=0x00000000004BB000 "*"
 *   insn=0x00000000004BB000 string=0x00000000004BB004 "\n"
 *   insn=0x00000000004BB00C string=0x00000000004BB044 "?"
 *   insn=0x00000000004BB010 string=0x00000000004BB014 "*"
 *   insn=0x00000000004BB014 string=0x00000000004BB018 "\n"
 *   insn=0x00000000004BB01C string=0x00000000004BB020 "l"
 *   insn=0x00000000004BB02C string=0x00000000004BB030 "("
 *   insn=0x00000000004BB038 string=0x00000000004BB03C "*"
 *   insn=0x00000000004BB03C string=0x00000000004BB040 "\n"
 *   insn=0x00000000004BB044 string=0x00000000004BB048 ","
 *   insn=0x00000000004BB064 string=0x00000000004BB068 "("
 *   insn=0x00000000004BB070 string=0x00000000004BB074 "\t\t@"
 *   insn=0x00000000004BB074 string=0x00000000004BB078 ")"
 *   insn=0x00000000004BB078 string=0x00000000004BB07C "\t\t"
 *   insn=0x00000000004BB080 string=0x00000000004BB084 ")"
 *   insn=0x00000000004BB084 string=0x00000000004BB088 "I"
 *   insn=0x00000000004BB088 string=0x00000000004BB0B0 "("
 *   insn=0x00000000004BB090 string=0x00000000004BB094 "("
 *   insn=0x00000000004BB090 string=0x00000000004BB100 ")"
 *   insn=0x00000000004BB094 string=0x00000000004BB098 ""
 *   insn=0x00000000004BB098 string=0x00000000004BB09C " "
 *   insn=0x00000000004BB0B0 string=0x00000000004BB0B4 ""
 *   insn=0x00000000004BB0E0 string=0x00000000004BB0E4 ""
 *   insn=0x00000000004BB0E0 string=0x00000000004BAEB8 "h\n@"
 *   insn=0x00000000004BB0E4 string=0x00000000004BB0E8 ""
 *   insn=0x00000000004BB0F8 string=0x00000000004BB0FC "s"
 *   insn=0x00000000004BB100 string=0x00000000004BB104 "i\n"
 *   insn=0x00000000004BB104 string=0x00000000004BB108 " "
 *   insn=0x00000000004BB108 string=0x00000000004BB10C "`"
 *   insn=0x00000000004BB10C string=0x00000000004BB110 "("
 *   insn=0x00000000004BB124 string=0x00000000004BB128 "H"
 *   insn=0x00000000004BB12C string=0x00000000004BB130 ""
 *   insn=0x00000000004BB130 string=0x00000000004BB134 ""
 *   insn=0x00000000004BB154 string=0x00000000004BB158 "@"
 *   insn=0x00000000004BB158 string=0x00000000004BB15C ""
 *   insn=0x00000000004BB15C string=0x00000000004BB160 ""
 *   insn=0x00000000004BB164 string=0x00000000004BB168 ""
 *   insn=0x00000000004BB168 string=0x00000000004BB16C "@"
 *   insn=0x00000000004BB174 string=0x00000000004BB178 "A"
 *   insn=0x00000000004BB184 string=0x00000000004BB188 "!"
 *   insn=0x00000000004BB188 string=0x00000000004BB1CC "A"
 *   insn=0x00000000004BB1CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BB1D8 string=0x00000000004BB1DC ""
 *   insn=0x00000000004BB204 string=0x00000000004BB208 "@"
 *   insn=0x00000000004BB208 string=0x00000000004BB20C "I"
 *   insn=0x00000000004BB20C string=0x00000000004BB210 ")=G"
 *   insn=0x00000000004BB210 string=0x00000000004BB214 "!"
 *   insn=0x00000000004BB218 string=0x00000000004BB21C "\t"
 *   insn=0x00000000004BB218 string=0x00000000004BB248 "\t"
 *   insn=0x00000000004BB21C string=0x00000000004BB220 "*"
 *   insn=0x00000000004BB220 string=0x00000000004BB224 "\n"
 *   insn=0x00000000004BB228 string=0x00000000004BB22C "?"
 *   insn=0x00000000004BB234 string=0x00000000004BB238 "["
 *   insn=0x00000000004BB240 string=0x00000000004BB244 "="
 *   insn=0x00000000004BB240 string=0x00000000004BB2D8 ""
 *   insn=0x00000000004BB248 string=0x00000000004BB24C "*"
 *   insn=0x00000000004BB24C string=0x00000000004BB250 "\n"
 *   insn=0x00000000004BB250 string=0x00000000004BB254 "?"
 *   insn=0x00000000004BB270 string=0x00000000004BB274 "I"
 *   insn=0x00000000004BB274 string=0x00000000004BB278 ")=G"
 *   insn=0x00000000004BB278 string=0x00000000004BB27C "!"
 *   insn=0x00000000004BB280 string=0x00000000004BB284 "\t"
 *   insn=0x00000000004BB280 string=0x00000000004BB2B0 "\t"
 *   insn=0x00000000004BB284 string=0x00000000004BB288 "*"
 *   insn=0x00000000004BB288 string=0x00000000004BB28C "\n"
 *   insn=0x00000000004BB290 string=0x00000000004BB294 "?"
 *   insn=0x00000000004BB29C string=0x00000000004BB2A0 "A"
 *   insn=0x00000000004BB2A4 string=0x00000000004BB2A8 "h"
 *   insn=0x00000000004BB2A8 string=0x00000000004BB2AC "#"
 *   insn=0x00000000004BB2A8 string=0x00000000004BB314 ""
 *   insn=0x00000000004BB2B0 string=0x00000000004BB2B4 "*"
 *   insn=0x00000000004BB2B4 string=0x00000000004BB2B8 "\n"
 *   insn=0x00000000004BB2B8 string=0x00000000004BB2BC "?"
 *   insn=0x00000000004BB2D0 string=0x00000000004BB2D4 "("
 *   insn=0x00000000004BB2D8 string=0x00000000004BB2DC ""
 *   insn=0x00000000004BB2DC string=0x00000000004BB2E0 ""
 *   insn=0x00000000004BB2FC string=0x00000000004BB300 ""
 *   insn=0x00000000004BB300 string=0x00000000004BB304 "/"
 *   insn=0x00000000004BB304 string=0x00000000004BB3C0 ""
 *   insn=0x00000000004BB30C string=0x00000000004BB310 "H"
 *   insn=0x00000000004BB314 string=0x00000000004BB318 ""
 *   insn=0x00000000004BB318 string=0x00000000004BB31C ""
 *   insn=0x00000000004BB338 string=0x00000000004BB33C "("
 *   insn=0x00000000004BB340 string=0x00000000004BB344 "@"
 *   insn=0x00000000004BB344 string=0x00000000004BB348 "0"
 *   insn=0x00000000004BB344 string=0x00000000004BB3EC "@"
 *   insn=0x00000000004BB354 string=0x00000000004BB358 "\t\t@"
 *   insn=0x00000000004BB358 string=0x00000000004BB35C ")"
 *   insn=0x00000000004BB35C string=0x00000000004BB360 "\t\t"
 *   insn=0x00000000004BB360 string=0x00000000004BB364 "!"
 *   insn=0x00000000004BB364 string=0x00000000004BB368 "\t"
 *   insn=0x00000000004BB368 string=0x00000000004BB36C ")@"
 *   insn=0x00000000004BB370 string=0x00000000004BB374 " "
 *   insn=0x00000000004BB374 string=0x00000000004BB378 "$"
 *   insn=0x00000000004BB384 string=0x00000000004BB388 ""
 *   insn=0x00000000004BB388 string=0x00000000004BB38C "\t\t@"
 *   insn=0x00000000004BB38C string=0x00000000004BB390 ")"
 *   insn=0x00000000004BB390 string=0x00000000004BB394 "\t\t"
 *   insn=0x00000000004BB398 string=0x00000000004BB39C "\t"
 *   insn=0x00000000004BB39C string=0x00000000004BB3A0 ")@"
 *   insn=0x00000000004BB3A4 string=0x00000000004BB3A8 " "
 *   insn=0x00000000004BB3B8 string=0x00000000004BB3BC "("
 *   insn=0x00000000004BB3C0 string=0x00000000004BB3C4 ""
 *   insn=0x00000000004BB3C4 string=0x00000000004BB3C8 ""
 *   insn=0x00000000004BB3EC string=0x00000000004BB3F0 ""
 *   insn=0x00000000004BB3F0 string=0x00000000004BB3F4 ""
 *   insn=0x00000000004BB3F8 string=0x00000000004BB3FC ""
 *   insn=0x00000000004BB3FC string=0x00000000004BB400 "@"
 *   insn=0x00000000004BB408 string=0x00000000004BB40C "."
 *   insn=0x00000000004BB418 string=0x00000000004BB41C "\t\t@"
 *   insn=0x00000000004BB41C string=0x00000000004BB420 ")"
 *   insn=0x00000000004BB420 string=0x00000000004BB424 "\t\t"
 *   insn=0x00000000004BB428 string=0x00000000004BB42C "\t"
 *   insn=0x00000000004BB42C string=0x00000000004BB430 ")@"
 *   insn=0x00000000004BB434 string=0x00000000004BB438 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::OnlineController_Android::HandleGoogleSignInCompleted(_QWORD *this, char a2)
{
  _QWORD *v2; // x22
  _QWORD *v4; // x23
  __int64 v5; // x25
  void *v6; // x0
  __int64 v7; // x8
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // x8
  void *v9; // x0
  __int64 v10; // x8
  void (__fastcall *v11)(__int128 *, __int128 *, __int64); // x8
  __int64 v12; // x8
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  _QWORD *v17; // x8
  __int64 v18; // x9
  void (__fastcall *v19)(__int128 *, __int128 *, __int64); // x8
  __int64 v20; // x8
  __int64 v21; // [xsp+10h] [xbp-F0h]
  __int128 v22; // [xsp+18h] [xbp-E8h] BYREF
  __int64 v23; // [xsp+28h] [xbp-D8h]
  __int64 v24; // [xsp+38h] [xbp-C8h] BYREF
  __int64 v25; // [xsp+40h] [xbp-C0h]
  __int128 v26; // [xsp+48h] [xbp-B8h] BYREF
  __int64 v27; // [xsp+58h] [xbp-A8h]
  __int64 v28; // [xsp+60h] [xbp-A0h]
  _QWORD *v29; // [xsp+68h] [xbp-98h]
  __int64 v30; // [xsp+70h] [xbp-90h]
  __int128 v31; // [xsp+78h] [xbp-88h] BYREF
  __int64 v32; // [xsp+88h] [xbp-78h]
  _BYTE v33[16]; // [xsp+90h] [xbp-70h] BYREF
  __int64 v34; // [xsp+A8h] [xbp-58h]

  v2 = this;
  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this + 2;
  v5 = this[2];
  if ( this + 2 != (_QWORD *)v5 )
  {
    do
    {
      v28 = *(_QWORD *)(v5 + 16);
      v17 = *(_QWORD **)(v5 + 24);
      v29 = v17;
      if ( v17 )
        ++v17[2];
      v30 = 0;
      v18 = *(_QWORD *)(v5 + 32);
      if ( v18 )
      {
        v30 = *(_QWORD *)(v5 + 32);
        if ( (v18 & 1) != 0 )
        {
          v32 = *(_QWORD *)(v5 + 56);
          v31 = *(_OWORD *)(v5 + 40);
          if ( !v17 )
            goto LABEL_49;
          goto LABEL_42;
        }
        (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(v18 & 0xFFFFFFFFFFFFFFFELL))(v5 + 40, &v31, 0);
        v17 = v29;
      }
      if ( !v17 )
        goto LABEL_49;
LABEL_42:
      if ( v17[1] && v28 )
      {
        if ( (a2 & 1) != 0 )
        {
          *((_BYTE *)v2 + 32) = 1;
          v25 = 0;
          if ( v30 )
          {
            v25 = v30;
            if ( (v30 & 1) != 0 )
            {
              v27 = v32;
              v26 = v31;
            }
            else
            {
              (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v30 & 0xFFFFFFFFFFFFFFFELL))(&v31, &v26, 0);
            }
          }
          sub_566BB8((int)&v24, "");
          if ( !v25 )
          {
            boost::bad_function_call::bad_function_call((boost::bad_function_call *)v33);
            boost::throw_exception<boost::bad_function_call>();
          }
          (*(void (__fastcall **)(__int128 *, __int64, __int64 *))((v25 & 0xFFFFFFFFFFFFFFFELL) + 8))(&v26, 1, &v24);
          v6 = (void *)(v24 - 24);
          if ( (__int64 *)(v24 - 24) == &qword_6FD2E0 )
            goto LABEL_9;
          v13 = (unsigned int *)(v24 - 8);
          if ( &pthread_create )
          {
            do
              v14 = __ldaxr(v13);
            while ( __stlxr(v14 - 1, v13) );
          }
          else
          {
            v14 = (*v13)--;
          }
          if ( v14 > 0 )
          {
LABEL_9:
            v7 = v25;
            if ( !v25 )
              goto LABEL_21;
          }
          else
          {
            operator delete(v6);
            v7 = v25;
            if ( !v25 )
              goto LABEL_21;
          }
          if ( (v7 & 1) == 0 )
          {
            v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v7 & 0xFFFFFFFFFFFFFFFELL);
            if ( v8 )
              v8(&v26, &v26, 2);
          }
          v25 = 0;
        }
        else
        {
          *((_BYTE *)v2 + 32) = 0;
          v21 = 0;
          if ( v30 )
          {
            v21 = v30;
            if ( (v30 & 1) != 0 )
            {
              v23 = v32;
              v22 = v31;
            }
            else
            {
              (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v30 & 0xFFFFFFFFFFFFFFFELL))(&v31, &v22, 0);
            }
          }
          sub_566BB8(
            (int)&v24,
            "An error occured while signing in with Google. Please make you are connected to the internet and try again later.");
          if ( !v21 )
          {
            boost::bad_function_call::bad_function_call((boost::bad_function_call *)v33);
            boost::throw_exception<boost::bad_function_call>();
          }
          (*(void (__fastcall **)(__int128 *, _QWORD, __int64 *))((v21 & 0xFFFFFFFFFFFFFFFELL) + 8))(&v22, 0, &v24);
          v9 = (void *)(v24 - 24);
          if ( (__int64 *)(v24 - 24) == &qword_6FD2E0 )
            goto LABEL_17;
          v15 = (unsigned int *)(v24 - 8);
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
          if ( v16 > 0 )
          {
LABEL_17:
            v10 = v21;
          }
          else
          {
            operator delete(v9);
            v10 = v21;
          }
          if ( (v10 & 1) == 0 )
          {
            v11 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v10 & 0xFFFFFFFFFFFFFFFELL);
            if ( v11 )
              v11(&v22, &v22, 2);
          }
        }
LABEL_21:
        v5 = *(_QWORD *)v5;
        v12 = v30;
        if ( v30 )
          goto LABEL_50;
        goto LABEL_54;
      }
LABEL_49:
      v5 = std::list<Caver::TargetAction<void ()(bool,std::string const&)>>::erase();
      v12 = v30;
      if ( v30 )
      {
LABEL_50:
        if ( (v12 & 1) == 0 )
        {
          v19 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v12 & 0xFFFFFFFFFFFFFFFELL);
          if ( v19 )
            v19(&v31, &v31, 2);
        }
        v30 = 0;
      }
LABEL_54:
      this = v29;
      if ( v29 )
      {
        v20 = v29[2] - 1LL;
        v29[2] = v20;
        if ( !v20 )
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 24LL))(this);
      }
    }
    while ( v4 != (_QWORD *)v5 );
  }
  return this;
}

