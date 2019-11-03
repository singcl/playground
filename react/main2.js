(function() {
    // REACT 15.6.1
    // @see https://www.jianshu.com/p/45f4b2137878
    var TComponent = React.createClass({
        getInitialState: function() {
            return {
                val: 0
            };
        },

        getDefaultProps: function() {
            //
        },

        componentDidMount() {
            var that = this;
            this.setState({
                val: this.state.val + 1
            });

            console.log(this.state.val); //0

            this.setState({
                val: this.state.val + 1
            });
            console.log(this.state.val); //0

            setTimeout(function() {
                that.setState({ val: that.state.val + 1 });
                console.log(that.state.val); // 2
                that.setState({ val: that.state.val + 1 });
                console.log(that.state.val); // 3
            }, 0);
        },

        componentDidUpdate() {},

        render() {
            console.log(this.state.val); //0 , 1, 2, 3
            return <div></div>;
        }
    });

    var RDOM = ReactDOM.render(
        <TComponent sex="female">hoho singcl</TComponent>,
        document.getElementById('root')
    );
})();
