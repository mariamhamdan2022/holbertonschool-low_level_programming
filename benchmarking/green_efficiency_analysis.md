# Green Efficiency Analysis

## Measurement Methodology

This report examines the recorded outputs of three programs in the benchmarking directory. All execution times are reported in seconds with six decimal places.

The baseline program executed 100,000,000 iterations in each of three runs. The recorded times were 0.234719, 0.229424, and 0.230577 seconds. The calculated average was 0.231573 seconds. The difference between the highest and lowest recorded times was 0.005295 seconds.

The algorithm comparison program measured two implementations using an array of 50,000 integers. The Naive implementation recorded 2.774953, 2.785069, and 2.883274 seconds. The Single-pass implementation recorded 0.000106 seconds in all three runs. Their respective averages were 2.814432 and 0.000106 seconds.

The instrumentation program used clock() and CLOCKS_PER_SEC to measure four intervals. Its recorded output was TOTAL 0.001299 seconds, BUILD_DATA 0.000514 seconds, PROCESS 0.000522 seconds, and REDUCE 0.000263 seconds. TOTAL measured the interval from before dataset construction until after checksum reduction. Each individual measurement surrounded its corresponding function call.

## Observed Performance Differences

The baseline measurements were relatively close. The three execution times ranged from 0.229424 to 0.234719 seconds. The calculated average was 0.231573 seconds.

The algorithm comparison showed a substantial difference in recorded execution time. The average Naive time was 2.814432 seconds, while the Single-pass average was 0.000106 seconds. The ratio between these averages was approximately 26,551 to 1.

However, the program printed different result values: 625025000 for Naive and 25000 for Single-pass. Consequently, the timing ratio alone does not demonstrate that two equivalent implementations performed the same work or produced identical results.

In the instrumentation experiment, PROCESS was the longest phase at 0.000522 seconds. BUILD_DATA followed closely at 0.000514 seconds, while REDUCE was the shortest at 0.000263 seconds. The three phase measurements add up to the recorded TOTAL of 0.001299 seconds.

## Relation Between Runtime and Energy Consumption

None of the recorded program outputs contains a measurement of electrical power or energy consumption. The experiments recorded execution times only.

Therefore, these results cannot establish how many joules were consumed by any implementation. They also cannot demonstrate a measured percentage of energy savings. Runtime comparisons provide evidence about execution duration, but the recorded measurements do not establish an energy-consumption relationship.

## Limitations of the Experiment

The baseline and algorithm comparison each included three recorded runs. The instrumentation experiment included only one recorded run. Therefore, the instrumentation results do not show variation across repeated measurements.

The experiments did not record power readings, energy consumption, or hardware energy-counter values. All reported times were printed to six decimal places.

An additional limitation is that the two algorithm implementations produced different result values. This prevents treating their execution-time ratio as a verified comparison of equivalent solutions.

## Practical Engineering Takeaway

The recorded baseline results show an average execution time of 0.231573 seconds for 100,000,000 iterations.

The algorithm comparison records a large difference in execution time, but the different result values must be investigated before drawing a correctness-equivalent performance conclusion.

The instrumentation output identifies PROCESS as the longest phase in its recorded run, at 0.000522 seconds. This makes it a reasonable phase to examine first when investigating the measured execution time.

A responsible engineering evaluation should verify that implementations produce equivalent results, repeat measurements, and collect direct energy data before claiming energy savings. These experiments support conclusions about execution time, not measured environmental or energy improvements.
