/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f88b0
 * Function: boost::uniform_int<unsigned_long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
 * Signature: ulong __cdecl generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>(pass_through_engine * param_1, ulong param_2, ulong param_3, ulong param_4)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong boost::uniform_int<unsigned_long>::
      generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
                (pass_through_engine *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = (*(code *)
            PTR_generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>_007dec88
          )();
  return uVar1;
}


