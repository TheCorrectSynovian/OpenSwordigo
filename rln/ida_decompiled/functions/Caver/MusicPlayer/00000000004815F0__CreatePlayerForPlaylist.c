/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004815F0
 * Mangled: _ZN5Caver11MusicPlayer23CreatePlayerForPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE
 * Demangled: Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 1
 *   0x00000000002027C0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callees: 10
 *   0x00000000001F5950  boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>(Caver::AudioPlayer *)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBE80  Caver::MusicPlayer::UpdatePlayerVolume(void)
 *   0x00000000001FE8F0  Caver::AudioPlayer::NewPlayer(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 207
 *   insn=0x0000000000481604 string=0x0000000000481608 "V"
 *   insn=0x0000000000481628 string=0x000000000048162C "hVA"
 *   insn=0x0000000000481628 string=0x00000000001F5950 "P'"
 *   insn=0x0000000000481638 string=0x000000000048163C "i""
 *   insn=0x0000000000481640 string=0x0000000000481644 "5"
 *   insn=0x0000000000481648 string=0x000000000048164C ""
 *   insn=0x000000000048165C string=0x0000000000481660 "\t@"
 *   insn=0x0000000000481668 string=0x000000000048166C ""
 *   insn=0x000000000048167C string=0x0000000000481680 "@"
 *   insn=0x000000000048168C string=0x0000000000481690 "@"
 *   insn=0x0000000000481698 string=0x00000000004816B8 "("
 *   insn=0x00000000004816B0 string=0x00000000004816B4 ""
 *   insn=0x00000000004816B4 string=0x00000000004816D4 "u\n@"
 *   insn=0x00000000004816B8 string=0x00000000004816BC ""
 *   insn=0x00000000004816C8 string=0x00000000004816CC "a"
 *   insn=0x00000000004816EC string=0x0000000000596758 "ogg"
 *   insn=0x00000000004816F8 string=0x00000000004816FC "/"
 *   insn=0x0000000000481708 string=0x000000000048170C "\t"
 *   insn=0x000000000048170C string=0x00000000001F5F30 "P'"
 *   insn=0x0000000000481720 string=0x0000000000481724 "7"
 *   insn=0x0000000000481734 string=0x0000000000481830 "\t"
 *   insn=0x0000000000481744 string=0x0000000000481854 "\t"
 *   insn=0x0000000000481750 string=0x0000000000481754 "!\t"
 *   insn=0x0000000000481754 string=0x0000000000481758 "5"
 *   insn=0x0000000000481754 string=0x0000000000481878 "\t"
 *   insn=0x0000000000481758 string=0x000000000048175C "u\n@"
 *   insn=0x0000000000481758 string=0x00000000004817DC "`\n@"
 *   insn=0x000000000048176C string=0x0000000000481770 "n"
 *   insn=0x0000000000481774 string=0x000000000059675C "mp3"
 *   insn=0x0000000000481780 string=0x0000000000481784 ""
 *   insn=0x00000000004817B4 string=0x0000000000481944 "\t"
 *   insn=0x00000000004817C0 string=0x00000000004817C4 "!"
 *   insn=0x00000000004817C4 string=0x0000000000481968 "\t"
 *   insn=0x00000000004817D4 string=0x000000000048198C "\t"
 *   insn=0x00000000004817D8 string=0x0000000000481A10 "t"
 *   insn=0x00000000004817DC string=0x00000000004817E0 "a"@9"
 *   insn=0x00000000004817E0 string=0x00000000004817E4 ""
 *   insn=0x00000000004817E4 string=0x00000000004817E8 "%@"
 *   insn=0x00000000004817F4 string=0x00000000001FBE80 "0'"
 *   insn=0x0000000000481804 string=0x000000000048189C "\t"
 *   insn=0x0000000000481810 string=0x0000000000481814 "a"
 *   insn=0x0000000000481830 string=0x0000000000481834 ")=G"
 *   insn=0x0000000000481834 string=0x0000000000481838 "!"
 *   insn=0x0000000000481838 string=0x000000000048183C ")"
 *   insn=0x000000000048183C string=0x0000000000481840 "\t"
 *   insn=0x000000000048183C string=0x00000000004818C0 "\t"
 *   insn=0x0000000000481840 string=0x0000000000481844 "*"
 *   insn=0x0000000000481844 string=0x0000000000481848 "\n"
 *   insn=0x0000000000481850 string=0x00000000004818CC "?"
 *   insn=0x0000000000481854 string=0x0000000000481858 ")=G"
 *   insn=0x0000000000481858 string=0x000000000048185C "!"
 *   insn=0x000000000048185C string=0x0000000000481860 "\t"
 *   insn=0x0000000000481860 string=0x0000000000481864 "\t"
 *   insn=0x0000000000481860 string=0x00000000004818E0 "\t"
 *   insn=0x0000000000481864 string=0x0000000000481868 "*"
 *   insn=0x0000000000481868 string=0x000000000048186C "\n"
 *   insn=0x0000000000481874 string=0x00000000004818EC "?"
 *   insn=0x0000000000481878 string=0x000000000048187C ")=G"
 *   insn=0x000000000048187C string=0x0000000000481880 "!"
 *   insn=0x0000000000481884 string=0x0000000000481888 "\t"
 *   insn=0x0000000000481884 string=0x0000000000481900 "\t"
 *   insn=0x0000000000481888 string=0x000000000048188C "*"
 *   insn=0x000000000048188C string=0x0000000000481890 "\n"
 *   insn=0x0000000000481898 string=0x000000000048190C "?"
 *   insn=0x000000000048189C string=0x00000000004818A0 ")=G"
 *   insn=0x00000000004818A0 string=0x00000000004818A4 "!"
 *   insn=0x00000000004818A8 string=0x00000000004818AC "\t"
 *   insn=0x00000000004818A8 string=0x0000000000481924 "\t"
 *   insn=0x00000000004818AC string=0x00000000004818B0 "*"
 *   insn=0x00000000004818B0 string=0x00000000004818B4 "\n"
 *   insn=0x00000000004818BC string=0x0000000000481930 "?"
 *   insn=0x00000000004818C0 string=0x00000000004818C4 "*"
 *   insn=0x00000000004818C4 string=0x00000000004818C8 "\n"
 *   insn=0x00000000004818CC string=0x00000000004818D0 "L"
 *   insn=0x00000000004818E0 string=0x00000000004818E4 "*"
 *   insn=0x00000000004818E4 string=0x00000000004818E8 "\n"
 *   insn=0x0000000000481900 string=0x0000000000481904 "*"
 *   insn=0x0000000000481904 string=0x0000000000481908 "\n"
 *   insn=0x000000000048190C string=0x0000000000481910 "L"
 *   insn=0x0000000000481924 string=0x0000000000481928 "*"
 *   insn=0x0000000000481928 string=0x000000000048192C "\n"
 *   insn=0x0000000000481944 string=0x0000000000481948 ")=G"
 *   insn=0x0000000000481948 string=0x000000000048194C "!"
 *   insn=0x000000000048194C string=0x0000000000481950 "\t"
 *   insn=0x0000000000481950 string=0x0000000000481954 "\t"
 *   insn=0x0000000000481950 string=0x00000000004819B0 "\t"
 *   insn=0x0000000000481954 string=0x0000000000481958 "*"
 *   insn=0x0000000000481958 string=0x000000000048195C "\n"
 *   insn=0x0000000000481964 string=0x00000000004819BC "?"
 *   insn=0x0000000000481968 string=0x000000000048196C ")=G"
 *   insn=0x000000000048196C string=0x0000000000481970 "!"
 *   insn=0x0000000000481974 string=0x0000000000481978 "\t"
 *   insn=0x0000000000481974 string=0x00000000004819D0 "\t"
 *   insn=0x0000000000481978 string=0x000000000048197C "*"
 *   insn=0x000000000048197C string=0x0000000000481980 "\n"
 *   insn=0x0000000000481988 string=0x00000000004819DC "?"
 *   insn=0x000000000048198C string=0x0000000000481990 ")=G"
 *   insn=0x0000000000481990 string=0x0000000000481994 "!"
 *   insn=0x0000000000481998 string=0x000000000048199C "\t"
 *   insn=0x0000000000481998 string=0x00000000004819F0 "\t"
 *   insn=0x000000000048199C string=0x00000000004819A0 "*"
 *   insn=0x00000000004819A0 string=0x00000000004819A4 "\n"
 *   insn=0x00000000004819AC string=0x00000000004819FC "?"
 *   insn=0x00000000004819B0 string=0x00000000004819B4 "*"
 *   insn=0x00000000004819B4 string=0x00000000004819B8 "\n"
 *   insn=0x00000000004819C4 string=0x00000000004819C8 "w"
 *   insn=0x00000000004819C8 string=0x00000000004819CC "{"
 *   insn=0x00000000004819D0 string=0x00000000004819D4 "*"
 *   insn=0x00000000004819D4 string=0x00000000004819D8 "\n"
 *   insn=0x00000000004819DC string=0x00000000004819E0 "L"
 *   insn=0x00000000004819E4 string=0x00000000004819E8 "o"
 *   insn=0x00000000004819E8 string=0x00000000004819EC "w"
 *   insn=0x00000000004819F0 string=0x00000000004819F4 "*"
 *   insn=0x00000000004819F4 string=0x00000000004819F8 "\n"
 *   insn=0x0000000000481A04 string=0x0000000000481A08 "g"
 *   insn=0x0000000000481A1C string=0x0000000000481A20 ""
 *   insn=0x0000000000481A2C string=0x0000000000481A30 "\t@"
 *   insn=0x0000000000481A3C string=0x0000000000481A40 ""
 *   insn=0x0000000000481A4C string=0x0000000000481A50 "@"
 *   insn=0x0000000000481A58 string=0x0000000000481A5C "g"
 *   insn=0x0000000000481A60 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000481A68 string=0x0000000000481A6C "(a"
 *   insn=0x0000000000481A74 string=0x0000000000481A78 "\n"
 *   insn=0x0000000000481A78 string=0x0000000000481A7C "J=G"
 *   insn=0x0000000000481A7C string=0x0000000000481A80 ")!"
 *   insn=0x0000000000481A84 string=0x0000000000481A88 "*"
 *   insn=0x0000000000481A84 string=0x0000000000481A9C "*"
 *   insn=0x0000000000481A88 string=0x0000000000481A8C "K"
 *   insn=0x0000000000481A8C string=0x0000000000481A90 "+"
 *   insn=0x0000000000481A98 string=0x0000000000481AA8 "_"
 *   insn=0x0000000000481A9C string=0x0000000000481AA0 "K"
 *   insn=0x0000000000481AA0 string=0x0000000000481AA4 "+"
 *   insn=0x0000000000481AB4 string=0x0000000000481AB8 ";"
 *   insn=0x0000000000481ACC string=0x0000000000481AD0 "`"
 *   insn=0x0000000000481AD0 string=0x0000000000481AD4 "\t"
 *   insn=0x0000000000481AD4 string=0x0000000000481AD8 ")=G"
 *   insn=0x0000000000481AD8 string=0x0000000000481ADC "!"
 *   insn=0x0000000000481AE0 string=0x0000000000481AE4 "\t"
 *   insn=0x0000000000481AE0 string=0x0000000000481AF8 "\t"
 *   insn=0x0000000000481AE4 string=0x0000000000481AE8 "*"
 *   insn=0x0000000000481AE8 string=0x0000000000481AEC "\n"
 *   insn=0x0000000000481AF4 string=0x0000000000481B04 "?"
 *   insn=0x0000000000481AF8 string=0x0000000000481AFC "*"
 *   insn=0x0000000000481AFC string=0x0000000000481B00 "\n"
 *   insn=0x0000000000481B0C string=0x0000000000481B10 "%"
 *   insn=0x0000000000481B28 string=0x0000000000481B2C "\t"
 *   insn=0x0000000000481B2C string=0x0000000000481B30 ")=G"
 *   insn=0x0000000000481B30 string=0x0000000000481B34 "!"
 *   insn=0x0000000000481B34 string=0x0000000000481B38 "\t\t"
 *   insn=0x0000000000481B38 string=0x0000000000481B3C "\t"
 *   insn=0x0000000000481B38 string=0x0000000000481C58 "\t"
 *   insn=0x0000000000481B3C string=0x0000000000481B40 "*"
 *   insn=0x0000000000481B40 string=0x0000000000481B44 "\n"
 *   insn=0x0000000000481B48 string=0x0000000000481B4C "F"
 *   insn=0x0000000000481B4C string=0x0000000000481C64 "?"
 *   insn=0x0000000000481B54 string=0x0000000000481B58 "*"
 *   insn=0x0000000000481B58 string=0x0000000000481B5C "J"
 *   insn=0x0000000000481B60 string=0x0000000000481B64 "(a"
 *   insn=0x0000000000481B6C string=0x0000000000481B70 "\n"
 *   insn=0x0000000000481B70 string=0x0000000000481B74 "J=G"
 *   insn=0x0000000000481B74 string=0x0000000000481B78 ")!"
 *   insn=0x0000000000481B7C string=0x0000000000481B80 "*"
 *   insn=0x0000000000481B7C string=0x0000000000481B94 "*"
 *   insn=0x0000000000481B80 string=0x0000000000481B84 "K"
 *   insn=0x0000000000481B84 string=0x0000000000481B88 "+"
 *   insn=0x0000000000481B90 string=0x0000000000481BA0 "_"
 *   insn=0x0000000000481B94 string=0x0000000000481B98 "K"
 *   insn=0x0000000000481B98 string=0x0000000000481B9C "+"
 *   insn=0x0000000000481BBC string=0x0000000000481BC0 ")"
 *   insn=0x0000000000481BC0 string=0x0000000000481BC4 ")"
 *   insn=0x0000000000481BCC string=0x0000000000481BD0 "`"
 *   insn=0x0000000000481BD0 string=0x0000000000481BD4 "\t"
 *   insn=0x0000000000481BD4 string=0x0000000000481BD8 ")=G"
 *   insn=0x0000000000481BD8 string=0x0000000000481BDC "!"
 *   insn=0x0000000000481BE0 string=0x0000000000481BE4 "\t"
 *   insn=0x0000000000481BE0 string=0x0000000000481BF8 "\t"
 *   insn=0x0000000000481BE4 string=0x0000000000481BE8 "*"
 *   insn=0x0000000000481BE8 string=0x0000000000481BEC "\n"
 *   insn=0x0000000000481BF4 string=0x0000000000481C04 "?"
 *   insn=0x0000000000481BF8 string=0x0000000000481BFC "*"
 *   insn=0x0000000000481BFC string=0x0000000000481C00 "\n"
 *   insn=0x0000000000481C1C string=0x0000000000481C20 ")"
 *   insn=0x0000000000481C20 string=0x0000000000481C24 ")"
 *   insn=0x0000000000481C30 string=0x0000000000481C34 "\t"
 *   insn=0x0000000000481C34 string=0x0000000000481C38 ")=G"
 *   insn=0x0000000000481C38 string=0x0000000000481C3C "!"
 *   insn=0x0000000000481C40 string=0x0000000000481C44 "\t"
 *   insn=0x0000000000481C44 string=0x0000000000481C48 "*"
 *   insn=0x0000000000481C48 string=0x0000000000481C4C "\n"
 *   insn=0x0000000000481C58 string=0x0000000000481C5C "*"
 *   insn=0x0000000000481C5C string=0x0000000000481C60 "\n"
 *   insn=0x0000000000481C80 string=0x0000000000481C84 ")"
 *   insn=0x0000000000481C84 string=0x0000000000481C88 ")"
 *   insn=0x0000000000481C94 string=0x0000000000481C98 "\t"
 *   insn=0x0000000000481C98 string=0x0000000000481C9C ")=G"
 *   insn=0x0000000000481C9C string=0x0000000000481CA0 "!"
 *   insn=0x0000000000481CA0 string=0x0000000000481CA4 "i"
 *   insn=0x0000000000481CA4 string=0x0000000000481CA8 "\t"
 *   insn=0x0000000000481CA4 string=0x0000000000481CD0 "\t"
 *   insn=0x0000000000481CA8 string=0x0000000000481CAC "*"
 *   insn=0x0000000000481CAC string=0x0000000000481CB0 "\n"
 *   insn=0x0000000000481CB4 string=0x0000000000481CB8 "?"
 *   insn=0x0000000000481CB8 string=0x0000000000481CBC "l"
 *   insn=0x0000000000481CD0 string=0x0000000000481CD4 "*"
 *   insn=0x0000000000481CD4 string=0x0000000000481CD8 "\n"
 *   insn=0x0000000000481CD8 string=0x0000000000481CDC "?"
 *   insn=0x0000000000481CDC string=0x0000000000481CE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MusicPlayer::CreatePlayerForPlaylist(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x21
  char *v5; // x9
  _QWORD *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 (__fastcall *v11)(__int64, __int64 *); // x23
  char v12; // w21
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0
  __int64 v16; // x21
  __int64 (__fastcall *v17)(__int64, __int64 *); // x24
  char v18; // w20
  void *v19; // x0
  void *v20; // x0
  void *v21; // x0
  char *v22; // x0
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  unsigned int *v31; // x8
  int v32; // w9
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9
  _QWORD *v37; // x20
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // [xsp+8h] [xbp-68h] BYREF
  __int64 v41; // [xsp+10h] [xbp-60h] BYREF
  __int64 v42; // [xsp+18h] [xbp-58h] BYREF
  char *v43; // [xsp+28h] [xbp-48h] BYREF
  _QWORD *v44; // [xsp+30h] [xbp-40h]
  __int64 v45; // [xsp+38h] [xbp-38h]

  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::AudioPlayer::NewPlayer((Caver::AudioPlayer *)a1);
  boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>();
  v4 = *(_QWORD **)(a1 + 24);
  v5 = v43;
  v43 = *(char **)(a1 + 16);
  v6 = v44;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = v6;
  v44 = v4;
  if ( v4 )
  {
    v7 = v4[1] - 1LL;
    v4[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v8 = v4[2] - 1LL;
      v4[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( v9 == *(_QWORD *)(*(_QWORD *)a2 + 24LL) )
  {
    LODWORD(v44) = 1065353216;
    v43 = &byte_6FD2F8;
  }
  else
  {
    sub_56A528(&v43, *(_QWORD *)(*(_QWORD *)a2 + 16LL));
    LODWORD(v44) = *(_DWORD *)(v9 + 8);
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 16LL);
  sub_56A528(&v41, &v43);
  sub_566BB8((int)&v40, "ogg");
  Caver::PathForResourceOfType();
  v12 = v11(v10, &v42);
  v13 = (void *)(v42 - 24);
  if ( (__int64 *)(v42 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v42 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v14);
  }
  v15 = (void *)(v41 - 24);
  if ( (__int64 *)(v41 - 24) == &qword_6FD2E0 )
    goto LABEL_11;
  v27 = (unsigned int *)(v41 - 8);
  if ( &pthread_create )
  {
    do
      v28 = __ldaxr(v27);
    while ( __stlxr(v28 - 1, v27) );
  }
  else
  {
    v28 = (*v27)--;
  }
  if ( v28 > 0 )
  {
LABEL_11:
    if ( (v12 & 1) != 0 )
      goto LABEL_16;
  }
  else
  {
    operator delete(v15);
    if ( (v12 & 1) != 0 )
      goto LABEL_16;
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 16LL);
  sub_56A528(&v41, &v43);
  sub_566BB8((int)&v40, "mp3");
  Caver::PathForResourceOfType();
  v18 = v17(v16, &v42);
  v19 = (void *)(v42 - 24);
  if ( (__int64 *)(v42 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v42 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v19);
  }
  v20 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = (*v33)--;
    }
    if ( v34 <= 0 )
      operator delete(v20);
  }
  v21 = (void *)(v41 - 24);
  if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v41 - 8);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 <= 0 )
    {
      operator delete(v21);
      if ( (v18 & 1) == 0 )
        goto LABEL_62;
LABEL_16:
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 72LL))(
        *(_QWORD *)(a1 + 16),
        *(unsigned __int8 *)(a1 + 8));
      Caver::MusicPlayer::UpdatePlayerVolume((Caver::MusicPlayer *)a1);
      goto LABEL_17;
    }
  }
  if ( (v18 & 1) != 0 )
    goto LABEL_16;
LABEL_62:
  v37 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v37 )
  {
    v38 = v37[1] - 1LL;
    v37[1] = v38;
    if ( !v38 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
      v39 = v37[2] - 1LL;
      v37[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
    }
  }
LABEL_17:
  v22 = v43 - 24;
  if ( v43 - 24 != (char *)&qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v43 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 <= 0 )
      operator delete(v22);
  }
}

