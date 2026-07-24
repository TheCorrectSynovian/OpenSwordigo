/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8e28
 * Function: boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time
 * Signature: undefined __cdecl create_time(_func_tm_ptr_long_ptr_tm_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm* (*)(long const*,
   tm*)) */

long boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time
               (_func_tm_ptr_long_ptr_tm_ptr *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  tm *ptVar7;
  long lVar8;
  long lVar9;
  tm tStack_98;
  __time_t local_60;
  timeval local_58;
  uint local_48 [4];
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  gettimeofday(&local_58,(__timezone_ptr_t)0x0);
  local_60 = local_58.tv_sec;
  ptVar7 = (*param_1)(&local_60,&tStack_98);
  uVar1 = ptVar7->tm_year + 0x76c;
  uVar2 = uVar1 & 0xffff;
  if (uVar2 < 0x578) {
    gregorian::bad_year::bad_year((bad_year *)local_48);
    throw_exception<boost::gregorian::bad_year>((bad_year *)local_48);
LAB_005b9074:
                    /* catch() { ... } // from try @ 005b90e4 with catch @ 005b9078
                       catch() { ... } // from try @ 005b91b4 with catch @ 005b9078 */
    gregorian::bad_year::bad_year((bad_year *)local_48);
    throw_exception<boost::gregorian::bad_year>((bad_year *)local_48);
LAB_005b9084:
    gregorian::bad_month::bad_month((bad_month *)local_48);
    throw_exception<boost::gregorian::bad_month>((bad_month *)local_48);
LAB_005b9094:
    gregorian::bad_month::bad_month((bad_month *)local_48);
    throw_exception<boost::gregorian::bad_month>((bad_month *)local_48);
LAB_005b90a4:
    gregorian::bad_day_of_month::bad_day_of_month((bad_day_of_month *)local_48);
    throw_exception<boost::gregorian::bad_day_of_month>((bad_day_of_month *)local_48);
  }
  else {
    if (10000 < uVar2) goto LAB_005b9074;
    uVar2 = ptVar7->tm_mon + 1;
    if ((uVar2 & 0xffff) == 0) goto LAB_005b9084;
    if (0xc < (uVar2 & 0xffff)) goto LAB_005b9094;
    uVar4 = (ushort)ptVar7->tm_mday;
    if (uVar4 == 0) goto LAB_005b90a4;
    if (uVar4 < 0x20) {
      gregorian::date::date((date *)local_48,uVar1 & 0xffff,uVar2 & 0xffff);
      uVar1 = ptVar7->tm_min;
      uVar2 = ptVar7->tm_hour;
      uVar5 = ptVar7->tm_sec;
      if ((int)(uVar1 | uVar2 | uVar5) < 0) {
        uVar3 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar3 = uVar5;
        }
                    /* catch() { ... } // from try @ 005b8d4c with catch @ 005b8f10 */
        uVar5 = -uVar1;
        if (-1 < (int)uVar1) {
          uVar5 = uVar1;
        }
        uVar1 = -uVar2;
        if (-1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        lVar9 = -((ulong)(uint)local_58.tv_usec +
                 ((long)(int)uVar1 * 0xe10 + (long)(int)uVar5 * 0x3c + (long)(int)uVar3) * 1000000);
      }
      else {
        lVar9 = (ulong)(uint)local_58.tv_usec +
                ((long)(int)uVar2 * 0xe10 + (long)(int)uVar1 * 0x3c + (long)(int)uVar5) * 1000000;
      }
                    /* catch() { ... } // from try @ 005b8cfc with catch @ 005b8f48 */
                    /* catch() { ... } // from try @ 005b8c48 with catch @ 005b8f88 */
      if ((local_48[0] + 2 < 3) || (lVar9 + 0x8000000000000002U < 3)) {
        if (lVar9 == -0x8000000000000000) {
LAB_005b8f70:
          if (local_48[0] == 0xfffffffe) {
LAB_005b8f78:
            lVar8 = 0x7ffffffffffffffe;
          }
          else {
LAB_005b8fb4:
            if (lVar9 == -0x8000000000000000) {
              lVar8 = 0x7ffffffffffffffe;
              if (local_48[0] == 0xffffffff) goto LAB_005b9040;
              lVar8 = -0x8000000000000000;
            }
            else {
                    /* catch() { ... } // from try @ 005b8cd0 with catch @ 005b8fc8 */
              lVar8 = lVar9;
              if (lVar9 == 0x7fffffffffffffff) {
                lVar8 = 0x7ffffffffffffffe;
                if (local_48[0] == 0) goto LAB_005b9040;
                lVar8 = 0x7fffffffffffffff;
              }
            }
            if (1 < lVar9 + 0x8000000000000001U) {
              if (local_48[0] == 0xffffffff) {
                lVar8 = 0x7fffffffffffffff;
              }
              else {
                if (local_48[0] != 0) goto LAB_005b9034;
                lVar8 = -0x8000000000000000;
              }
            }
          }
        }
        else {
          lVar8 = 0x7ffffffffffffffe;
          if (lVar9 != 0x7ffffffffffffffe) {
            if (lVar9 == 0x7fffffffffffffff) goto LAB_005b8f70;
            if (local_48[0] + 1 < 2) goto LAB_005b8fb4;
                    /* catch() { ... } // from try @ 005b8c74 with catch @ 005b9008 */
            if (local_48[0] == 0xfffffffe) goto LAB_005b8f78;
LAB_005b9034:
            lVar8 = lVar9 + (ulong)local_48[0];
          }
        }
      }
      else {
        lVar8 = lVar9 + (ulong)local_48[0] * 86400000000;
      }
LAB_005b9040:
      if (*(long *)(lVar6 + 0x28) == local_38) {
        return lVar8;
      }
      goto LAB_005b90c4;
    }
  }
  gregorian::bad_day_of_month::bad_day_of_month((bad_day_of_month *)local_48);
  throw_exception<boost::gregorian::bad_day_of_month>((bad_day_of_month *)local_48);
LAB_005b90c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


