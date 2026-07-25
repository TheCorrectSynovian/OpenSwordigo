/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CEB0
 * Mangled: __cxa_allocate_exception
 * Demangled: __cxa_allocate_exception
 *
 * Callers: 1
 *   0x00000000001F9460  .__cxa_allocate_exception
 *
 * Callees: 9
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000051CE80  sub_51CE80
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 18
 *   insn=0x000000000051CEC8 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051CED0 string=0x000000000051CF08 "U"
 *   insn=0x000000000051CEF0 string=0x000000000051CEF4 "`"
 *   insn=0x000000000051CF10 string=0x000000000051CF14 "`"
 *   insn=0x000000000051CF28 string=0x000000000051CF2C "A"
 *   insn=0x000000000051CF2C string=0x000000000051CF30 ""
 *   insn=0x000000000051CF30 string=0x000000000051CF50 ""
 *   insn=0x000000000051CF3C string=0x000000000051CF40 "s"
 *   insn=0x000000000051CF3C string=0x000000000051CF54 " "
 *   insn=0x000000000051CF5C string=0x000000000051CF60 "s~v"
 *   insn=0x000000000051CF64 string=0x000000000051CF68 "`"
 *   insn=0x000000000051CF68 string=0x000000000051CF6C "A"
 *   insn=0x000000000051CF78 string=0x000000000051CF7C "`"
 *   insn=0x000000000051CF84 string=0x000000000051CF88 "`"
 *   insn=0x000000000051CF84 string=0x00000000001FBB50 "0'"
 *   insn=0x000000000051CF90 string=0x000000000051CF94 "`"
 *   insn=0x000000000051CF94 string=0x000000000051CF98 "K"
 *   insn=0x000000000051CFA0 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *_cxa_allocate_exception(size_t thrown_size)
{
  size_t v1; // x20
  _QWORD *v2; // x19
  unsigned __int64 v4; // x0
  unsigned int v5; // w19

  v1 = thrown_size + 128;
  v2 = malloc(thrown_size + 128);
  if ( !v2 )
  {
    if ( &pthread_create && pthread_mutex_lock((pthread_mutex_t *)&qword_6EBCD0) )
      sub_51CE50();
    if ( v1 > 0x400 )
LABEL_9:
      std::terminate();
    v4 = qword_6FBD00;
    v5 = 0;
    while ( (v4 & 1) != 0 )
    {
      ++v5;
      v4 >>= 1;
      if ( v5 == 64 )
        goto LABEL_9;
    }
    qword_6FBD00 |= 1LL << v5;
    v2 = (_QWORD *)((char *)&unk_6EBD00 + 1024 * (unsigned __int64)v5);
    if ( &pthread_create && pthread_mutex_unlock((pthread_mutex_t *)&qword_6EBCD0) )
      sub_51CE80();
  }
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  return v2 + 16;
}

