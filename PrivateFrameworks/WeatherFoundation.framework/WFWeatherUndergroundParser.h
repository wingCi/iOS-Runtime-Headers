/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherUndergroundParser : WFForecastDataParser

+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned int)conditionFromWeatherUndergroundPhrase:(id)arg1;
+ (unsigned int)expectedDailyForecastCount;
+ (unsigned int)expectedHourlyForecastCount;

- (id)dateComponentsFromUTCDict:(id)arg1 toUnitGranularity:(unsigned int)arg2;
- (void)logParsingErrorAtKeyPath:(id)arg1 error:(id*)arg2;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (id)parseHistoricalForecast:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (id)sanitizedNumberForKeyPath:(id)arg1 dict:(id)arg2;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 dict:(id)arg3;

@end
