/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B73A0
 * Mangled: _ZN5boost5uuids6detail8seed_rng19sha1_random_digest_Ev
 * Demangled: boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callers: 1
 *   0x00000000001FF7C0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5B40  .fread
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8640  boost::uuids::detail::sha1::get_digest(uint (&)[5])
 *   0x00000000001FBFE0  .clock
 *   0x00000000001FC280  .time
 *   0x0000000000201440  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x0000000000202AD0  .rand
 *
 * Referenced strings: 103
 *   insn=0x00000000004B73B0 string=0x00000000004B73B4 "V"
 *   insn=0x00000000004B73B4 string=0x00000000004B73B8 ""
 *   insn=0x00000000004B73BC string=0x00000000004B73C0 "t"
 *   insn=0x00000000004B73CC string=0x00000000004B73D0 ">"
 *   insn=0x00000000004B73E0 string=0x00000000004B73E4 "Hz"
 *   insn=0x00000000004B7410 string=0x00000000004B7414 "("
 *   insn=0x00000000004B741C string=0x00000000004B7420 "("
 *   insn=0x00000000004B7550 string=0x00000000004B7554 "K"
 *   insn=0x00000000004B7554 string=0x00000000001FC280 "0'"
 *   insn=0x00000000004B75C0 string=0x00000000001FBFE0 "0'"
 *   insn=0x00000000004B7628 string=0x00000000004B762C ")-"
 *   insn=0x00000000004B7634 string=0x00000000004B7638 "&-"
 *   insn=0x00000000004B7640 string=0x00000000004B7644 "#-"
 *   insn=0x00000000004B7650 string=0x00000000004B7654 "{'"
 *   insn=0x00000000004B765C string=0x00000000004B7660 "x'"
 *   insn=0x00000000004B7668 string=0x00000000004B766C "u'"
 *   insn=0x00000000004B7674 string=0x00000000004B7678 "r'"
 *   insn=0x00000000004B7680 string=0x00000000004B7684 "o'"
 *   insn=0x00000000004B768C string=0x00000000004B7690 "l'"
 *   insn=0x00000000004B7698 string=0x00000000004B769C "i'"
 *   insn=0x00000000004B76A4 string=0x00000000004B76A8 "f'"
 *   insn=0x00000000004B76B0 string=0x00000000004B76B4 "c'"
 *   insn=0x00000000004B76BC string=0x00000000004B76C0 "`'"
 *   insn=0x00000000004B76C8 string=0x00000000004B76CC "]'"
 *   insn=0x00000000004B76D4 string=0x00000000004B76D8 "Z'"
 *   insn=0x00000000004B76D8 string=0x00000000004B76DC "c"
 *   insn=0x00000000004B76F0 string=0x00000000001F5B40 "P'"
 *   insn=0x00000000004B76FC string=0x00000000004B7700 "P'"
 *   insn=0x00000000004B7708 string=0x00000000004B770C "M'"
 *   insn=0x00000000004B7714 string=0x00000000004B7718 "J'"
 *   insn=0x00000000004B7720 string=0x00000000004B7724 "G'"
 *   insn=0x00000000004B772C string=0x00000000004B7730 "D'"
 *   insn=0x00000000004B7738 string=0x00000000004B773C "A'"
 *   insn=0x00000000004B7744 string=0x00000000004B7748 ">'"
 *   insn=0x00000000004B7750 string=0x00000000004B7754 ";'"
 *   insn=0x00000000004B775C string=0x00000000004B7760 "8'"
 *   insn=0x00000000004B7768 string=0x00000000004B776C "5'"
 *   insn=0x00000000004B7774 string=0x00000000004B7778 "2'"
 *   insn=0x00000000004B7780 string=0x00000000004B7784 "/'"
 *   insn=0x00000000004B778C string=0x00000000004B7790 ",'"
 *   insn=0x00000000004B7798 string=0x00000000004B779C ")'"
 *   insn=0x00000000004B77A4 string=0x00000000004B77A8 "&'"
 *   insn=0x00000000004B77B0 string=0x00000000004B77B4 "#'"
 *   insn=0x00000000004B77BC string=0x00000000004B77C0 " '"
 *   insn=0x00000000004B77E8 string=0x00000000004B77EC "}"
 *   insn=0x00000000004B77EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B7810 string=0x00000000004B7814 "'"
 *   insn=0x00000000004B781C string=0x00000000004B7820 "'"
 *   insn=0x00000000004B7888 string=0x00000000004B788C "a"
 *   insn=0x00000000004B7888 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B7894 string=0x00000000004B7898 "a"
 *   insn=0x00000000004B78A0 string=0x00000000004B78A4 "a\n@9"
 *   insn=0x00000000004B78AC string=0x00000000004B78B0 "a"
 *   insn=0x00000000004B78B8 string=0x00000000004B78BC "a"
 *   insn=0x00000000004B78C4 string=0x00000000004B78C8 "a"
 *   insn=0x00000000004B78D0 string=0x00000000004B78D4 "a"
 *   insn=0x00000000004B78DC string=0x00000000004B78E0 "a"
 *   insn=0x00000000004B78E8 string=0x00000000004B78EC "a"@9"
 *   insn=0x00000000004B78F4 string=0x00000000004B78F8 "a&@9"
 *   insn=0x00000000004B7900 string=0x00000000004B7904 "a*@9"
 *   insn=0x00000000004B790C string=0x00000000004B7910 "a.@9"
 *   insn=0x00000000004B7918 string=0x00000000004B791C "a2@9"
 *   insn=0x00000000004B7924 string=0x00000000004B7928 "a6@9"
 *   insn=0x00000000004B7930 string=0x00000000004B7934 "a:@9"
 *   insn=0x00000000004B793C string=0x00000000004B7940 "a>@9"
 *   insn=0x00000000004B7948 string=0x00000000004B794C "aB@9"
 *   insn=0x00000000004B7954 string=0x00000000004B7958 "aF@9"
 *   insn=0x00000000004B7960 string=0x00000000004B7964 "aJ@9"
 *   insn=0x00000000004B796C string=0x00000000004B7970 "aN@9"
 *   insn=0x00000000004B7980 string=0x00000000004B7984 "/"
 *   insn=0x00000000004B7984 string=0x00000000001F8640 "0'"
 *   insn=0x00000000004B798C string=0x00000000004B7990 "\n"
 *   insn=0x00000000004B7990 string=0x00000000004B7994 "I"
 *   insn=0x00000000004B7994 string=0x00000000004B7998 "\t"
 *   insn=0x00000000004B799C string=0x00000000004B79A0 "j"
 *   insn=0x00000000004B79A0 string=0x00000000004B79A4 "I"
 *   insn=0x00000000004B79A4 string=0x00000000004B79A8 "i"
 *   insn=0x00000000004B79AC string=0x00000000004B79B0 "\n"
 *   insn=0x00000000004B79B0 string=0x00000000004B79B4 "I"
 *   insn=0x00000000004B79B4 string=0x00000000004B79B8 "\t"
 *   insn=0x00000000004B79BC string=0x00000000004B79C0 "j"
 *   insn=0x00000000004B79C0 string=0x00000000004B79C4 "I"
 *   insn=0x00000000004B79C4 string=0x00000000004B79C8 "i"
 *   insn=0x00000000004B79CC string=0x00000000004B79D0 "\n\t@"
 *   insn=0x00000000004B79D0 string=0x00000000004B79D4 "I"
 *   insn=0x00000000004B79D4 string=0x00000000004B79D8 "\t\t"
 *   insn=0x00000000004B79DC string=0x00000000004B79E0 "j\n@"
 *   insn=0x00000000004B79E0 string=0x00000000004B79E4 "I"
 *   insn=0x00000000004B79E4 string=0x00000000004B79E8 "i\n"
 *   insn=0x00000000004B79EC string=0x00000000004B79F0 "\n@"
 *   insn=0x00000000004B79F0 string=0x00000000004B79F4 "I"
 *   insn=0x00000000004B79F4 string=0x00000000004B79F8 "\t"
 *   insn=0x00000000004B79FC string=0x00000000004B7A00 "j"
 *   insn=0x00000000004B7A00 string=0x00000000004B7A04 "I"
 *   insn=0x00000000004B7A04 string=0x00000000004B7A08 "i"
 *   insn=0x00000000004B7A0C string=0x00000000004B7A10 "\n"
 *   insn=0x00000000004B7A10 string=0x00000000004B7A14 "I"
 *   insn=0x00000000004B7A14 string=0x00000000004B7A18 "\t"
 *   insn=0x00000000004B7A1C string=0x00000000004B7A20 "i"
 *   insn=0x00000000004B7A20 string=0x00000000004B7A24 "("
 *   insn=0x00000000004B7A24 string=0x00000000004B7A28 "h"
 *   insn=0x00000000004B7A38 string=0x00000000004B7A50 " "
 *   insn=0x00000000004B7A50 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::uuids::detail::seed_rng::sha1_random_digest_(boost::uuids::detail::seed_rng *this)
{
  time_t v2; // x20
  clock_t v3; // x20
  int v4; // w0
  unsigned __int8 v5; // w21
  unsigned __int8 v6; // w1
  FILE *v7; // x3
  unsigned __int8 *v8; // x20
  unsigned __int8 v9; // w1
  __int64 result; // x0
  _QWORD ptr[3]; // [xsp+8h] [xbp-D8h] BYREF
  unsigned __int8 v12[16]; // [xsp+20h] [xbp-C0h]
  unsigned __int8 v13[16]; // [xsp+30h] [xbp-B0h]
  __int128 v14; // [xsp+40h] [xbp-A0h] BYREF
  int v15; // [xsp+50h] [xbp-90h]
  __int64 v16; // [xsp+98h] [xbp-48h]
  __int64 v17; // [xsp+A0h] [xbp-40h]
  __int64 v18; // [xsp+A8h] [xbp-38h]
  __int64 v19; // [xsp+B8h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v14 = xmmword_597370;
  *(_OWORD *)v12 = boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state;
  v15 = -1009589776;
  v17 = 0;
  v18 = 0;
  *(_DWORD *)v13 = dword_6E9F8C;
  v16 = 0;
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[1]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[2]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[3]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[4]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[5]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[6]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[7]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[8]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[9]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[10]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[11]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[12]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[13]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[14]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v12[15]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v13[0]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v13[1]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v13[2]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v13[3]);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned __int8)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned __int16)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 8);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned int)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 16);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned int)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 24);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned __int64)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 32);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned __int16)((unsigned __int64)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 32) >> 8);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned __int64)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 48);
  boost::uuids::detail::sha1::process_byte(
    (boost::uuids::detail::sha1 *)&v14,
    (unsigned __int64)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state >> 56);
  v2 = time(0);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v2);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(v2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(v2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(v2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE4(v2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE5(v2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE6(v2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, HIBYTE(v2));
  v3 = clock();
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v3);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(v3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(v3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(v3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE4(v3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE5(v3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE6(v3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, HIBYTE(v3));
  LODWORD(ptr[0]) = rand();
  v4 = rand();
  v5 = v4;
  HIDWORD(ptr[0]) = v4;
  LODWORD(ptr[1]) = rand();
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, ptr[0]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v5);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE5(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE6(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, HIBYTE(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, ptr[1]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(ptr[1]));
  v7 = (FILE *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    fread(ptr, 1u, 0x14u, v7);
    v6 = ptr[0];
  }
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v6);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE4(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE5(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE6(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, HIBYTE(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, ptr[1]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE4(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE5(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE6(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, HIBYTE(ptr[1]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, ptr[2]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(ptr[2]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(ptr[2]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(ptr[2]));
  v8 = (unsigned __int8 *)operator new(4u);
  ptr[0] = v8;
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v9);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v8[1]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v8[2]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, v8[3]);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, (unsigned __int8)v8);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE1(v8));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE2(v8));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE3(v8));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE4(v8));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE5(v8));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, BYTE6(ptr[0]));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, HIBYTE(ptr[0]));
  operator delete(v8);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *(_BYTE *)this);
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 1));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 2));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 3));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 4));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 5));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 6));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 7));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 8));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 9));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 10));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 11));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 12));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 13));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 14));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 15));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 16));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 17));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 18));
  boost::uuids::detail::sha1::process_byte((boost::uuids::detail::sha1 *)&v14, *((_BYTE *)this + 19));
  result = boost::uuids::detail::sha1::get_digest((boost::uuids::detail::sha1 *)&v14, (unsigned int (*)[5])ptr);
  LODWORD(boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state) = boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state
                                                                                  ^ LODWORD(ptr[0]);
  *(_DWORD *)this ^= LODWORD(ptr[0]);
  DWORD1(boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state) ^= HIDWORD(ptr[0]);
  *((_DWORD *)this + 1) ^= HIDWORD(ptr[0]);
  DWORD2(boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state) ^= LODWORD(ptr[1]);
  *((_DWORD *)this + 2) ^= LODWORD(ptr[1]);
  HIDWORD(boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state) ^= HIDWORD(ptr[1]);
  *((_DWORD *)this + 3) ^= HIDWORD(ptr[1]);
  dword_6E9F8C ^= LODWORD(ptr[2]);
  *((_DWORD *)this + 4) ^= LODWORD(ptr[2]);
  return result;
}

