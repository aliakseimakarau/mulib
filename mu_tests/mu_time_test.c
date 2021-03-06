/**
 * MIT License
 *
 * Copyright (c) 2019 R. Dunbar Poor <rdpoor@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "mu_time.h"
#include "test_utilities.h"
#include <stdio.h>

void mu_time_test() {
  mu_time_t t1;
  mu_time_t t2;
  mu_time_dt d1;
  mu_time_dt d2;

  t1 = mu_time_now();  // an arbitrary time
  d1 = mu_time_seconds_to_duration(1.0);
  t2 = mu_time_offset(t1, d1);

  UTEST_ASSERT(mu_time_is_before(t1, t2) == true);
  UTEST_ASSERT(mu_time_is_before(t1, t1) == false);
  UTEST_ASSERT(mu_time_is_before(t2, t1) == false);

  UTEST_ASSERT(mu_time_is_equal(t1, t1) == true);
  UTEST_ASSERT(mu_time_is_equal(t1, t2) == false);

  UTEST_ASSERT(mu_time_is_after(t1, t2) == false);
  UTEST_ASSERT(mu_time_is_after(t1, t1) == false);
  UTEST_ASSERT(mu_time_is_after(t2, t1) == true);

  d2 = mu_time_difference(t2, t1);
  UTEST_FLOAT_EPS(mu_time_duration_to_seconds(d2), 1.0, 0.001);

  t1 = mu_time_now();  // an arbitrary time
  t2 = mu_time_offset(t1, mu_time_seconds_to_duration(3.0));

  printf("test should pause for approximately 3.0 seconds...");
  fflush(stdout);
  while (mu_time_is_before(mu_time_now(), t2)) {
    // buzz
  }
}
