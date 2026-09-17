name = "宁宇集团"
stock_price = 6.5
stock_code = "003032"
stock_price_daily_growth_factor = 1.2
growth_days = 7
print(f"公司：{name}，股票代码：{stock_code}，当前股价：{stock_price}")
print("每日增长系数为：%.1f，经过%d天的增长后，股价达到了：%.2f元" % (stock_price_daily_growth_factor
, growth_days,stock_price * stock_price_daily_growth_factor ** growth_days))