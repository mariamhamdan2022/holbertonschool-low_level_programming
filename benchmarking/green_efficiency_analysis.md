# Green Efficiency Analysis

## Measurement Methodology

The measurements in this report come from three programs executed in the holbertonschool-low_level_programming environment.

The baseline loop executed 100,000,000 iterations and was run three times. Its recorded execution times were 0.234719, 0.229424, and 0.230577 seconds. The average execution time was 0.231573 seconds. These repeated runs provide a small view of timing variation for the same workload.

The algorithm comparison used an array of 50,000 integers. The program measured a nested-loop implementation named Naive and a Single-pass implementation. Across three runs, the Naive times were 2.774953, 2.785069, and 2.883274 seconds. The Single-pass time was 0.000106 seconds in each run. Their average times were 2.814432 and 0.000106 seconds respectively. Dividing these averages gives an observed time ratio of approximately 26,551 to 1.

The instrumentation experiment used clock() and CLOCKS_PER_SEC to measure total execution time and individual function phases. One recorded run reported TOTAL 0.001299 seconds, BUILD_DATA 0.000514 seconds, PROCESS 0.000522 seconds, and REDUCE 0.000263 seconds. The three phase measurements add up to the recorded total. The total measurement started before dataset construction and ended after checksum reduction. Each phase measurement surrounded its corresponding function call.

## Observed Performance Differences

The baseline loop times ranged from 0.229424 to 0.234719 seconds, a difference of 0.005295 seconds. The three measurements are close, although they are not identical.

In the algorithm comparison, the Naive implementation took more than two seconds per run, while the Single-pass implementation took only 0.000106 seconds per run. This is a very large difference in the recorded execution times.

However, the printed results were different: 625025000 for Naive and 25000 for Single-pass. Therefore, this experiment does not establish that both implementations performed equivalent work or produced the same answer. The 26,551-to-1 ratio describes the observed execution times only. It should not be treated as a verified speedup between equivalent solutions.

In the instrumentation experiment, PROCESS was the longest measured phase at 0.000522 seconds, slightly above BUILD_DATA at 0.000514 seconds. REDUCE was the shortest phase at 0.000263 seconds. This identifies where time was spent in that particular run.

## Relation Between Runtime and Energy Consumption

No direct power or energy measurements were collected in these experiments. Execution time tells us how long the measured code took, but it does not tell us how many joules were consumed.

A shorter runtime may provide an opportunity to reduce energy consumption when average power and system conditions are comparable. However, those conditions were not measured here. Therefore, it would be incorrect to claim a specific energy saving or percentage based on these results alone.

## Limitations of the Experiment

The baseline and algorithm comparison each used only three runs, while the instrumentation experiment used one recorded run. Execution times can vary with processor load, operating conditions, compiler settings, and measurement precision.

The experiment did not include processor power readings, hardware energy counters, or repeated instrumentation trials. Another important limitation is the different result values in the algorithm comparison, which prevent a fair correctness-equivalent performance conclusion.

## Practical Engineering Takeaway

Measure before optimizing, keep measurement boundaries consistent, and record both individual execution times and averages.

The instrumentation results suggest that PROCESS deserves examination first in that particular run, although its execution time was close to BUILD_DATA.

Before accepting the algorithm comparison as an optimization result, ensure that both implementations produce equivalent results and repeat the measurements.

For a reliable green-efficiency evaluation, collect energy or power measurements alongside execution time under controlled conditions. Runtime is useful evidence about execution duration, but it is not a direct measurement of energy consumption.
